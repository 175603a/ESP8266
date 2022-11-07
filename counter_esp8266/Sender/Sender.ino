//发送
#include <ESP8266WiFi.h>
#include <espnow.h>

#define detectPin D3  //低电平检测引脚
#define switchPin D2
bool pinState;  // 存储引脚状态用变量

//接收方MAC地址 根据自己的板子修改
uint8_t broadcastAddress[] = {0x24, 0xD7, 0xEB, 0xC6, 0x87, 0x92};

uint8_t count = 0;

//这是一个回调函数，将在发送消息时执行。
//在这种情况下，无论是否成功发送该消息，都会简单地打印出来
void OnDataSent(uint8_t *mac_addr, uint8_t sendStatus) {
  Serial.print("Last Packet Send Status: ");
  if (sendStatus == 0){
    Serial.println("Delivery success");
  }
  else{
    Serial.println("Delivery fail");
  }
}

void setup() {
  //初始化串行监视器以进行调试
  Serial.begin(115200);

  //将设备设置为Wi-Fi站点
  WiFi.mode(WIFI_STA);

  //立即初始化ESP
  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  //设置ESP8266角色  ESP_NOW_ROLE_CONTROLLER， ESP_NOW_ROLE_SLAVE， 
  //ESP_NOW_ROLE_COMBO， ESP_NOW_ROLE_MAX。
  esp_now_set_self_role(ESP_NOW_ROLE_CONTROLLER);
  //先前创建的功能。
  esp_now_register_send_cb(OnDataSent);
  
  //与另一个ESP-NOW设备配对以发送数据
  esp_now_add_peer(broadcastAddress, ESP_NOW_ROLE_SLAVE, 1, NULL, 0);

  //初始化后发送数据0
  count_init();
}

void count_init()
{
  count = 0;
  esp_now_send(broadcastAddress, (uint8_t *) &(count), sizeof(count));
}

void loop() {
  //配置要发送的值
  pinState = digitalRead(detectPin);  // 获取引脚状态
  if (!digitalRead(switchPin))
  {
    count_init();
  }
  if (!pinState) {
      delay(100);
      if (!pinState) {
          delay(90);
          count += 1;
          Serial.println(count);
          //发送消息
          esp_now_send(broadcastAddress, (uint8_t *) &count, sizeof(count));
          // //延时0.5秒
          // delay(500);
      }
  }




}