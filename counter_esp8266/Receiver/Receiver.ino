//接收
#include <ESP8266WiFi.h>
#include <espnow.h>
#include <FastLED.h>
#include <ShowNum.h>
#include <ESP8266WiFi.h>

#define FASTLED_ESP8266_NODEMCU_PIN_ORDER 3
#define NUM_LEDS    256    //256颗LED


//接收数据保存的类型和发送方一致
//创建接收数据的变量
uint8_t count;

ShowNum sn;

//创建一个回调函数作为接收数据后的串口显示
void OnDataRecv(uint8_t * mac, uint8_t *incomingData, uint8_t len) {
  fill_solid(sn.leds, NUM_LEDS, CRGB::Black);//刷新LED
  int a = count;//创建一个监测接收数据变化的变量
  memcpy(&count, incomingData, sizeof(count));
  //输出接收的数据
  Serial.print("Int: ");
  Serial.println(count);
  if(a!=count)//判断数据是否变化，变化后刷新显示数据
  {
    sn.on(count);
  }

}

void setup() {
  //初始化窗口
  Serial.begin(115200);
  
  //设置ESP8266模式
  WiFi.mode(WIFI_STA);

  //初始化 ESP-NOW
  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  LEDS.addLeds<WS2812, FASTLED_ESP8266_NODEMCU_PIN_ORDER, GRB>(sn.leds, NUM_LEDS);
  FastLED.setBrightness(2);  //可以设置全局亮度，调低亮度不刺眼
  sn.on(0);//初始化显示数据
  
  //设置ESP8266角色：
  esp_now_set_self_role(ESP_NOW_ROLE_SLAVE);
  //先前创建的功能 测试ESP-NOW通信
  //esp_now_register_recv_cb(OnDataRecv);
  Serial.println(esp_now_register_recv_cb(OnDataRecv));
}

void loop(){

}

