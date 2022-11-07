#include <ShowNum.h>
#include <FastLED.h>
#define PST_1 24
#define PST_2 72


// 传入一个数字并展示的函数
void ShowNum::on(unsigned int count)
{
  switch(count/10%10)
  {
    case 0:num_0(PST_1);
      break;
    case 1:num_1(PST_1);
      break;
    case 2:num_2(PST_1);
      break;
    case 3:num_3(PST_1);
      break;
    case 4:num_4(PST_1);
      break;
    case 5:num_5(PST_1);
      break;
    case 6:num_6(PST_1);
      break;
    case 7:num_7(PST_1);
      break;
    case 8:num_8(PST_1);
      break;
    case 9:num_9(PST_1);
      break;
  }
  switch(count%10)
  {
    case 0:num_0(PST_2);
      break;
    case 1:num_1(PST_2);
      break;
    case 2:num_2(PST_2);
      break;
    case 3:num_3(PST_2);
      break;
    case 4:num_4(PST_2);
      break;
    case 5:num_5(PST_2);
      break;
    case 6:num_6(PST_2);
      break;
    case 7:num_7(PST_2);
      break;
    case 8:num_8(PST_2);
      break;
    case 9:num_9(PST_2);
      break;
  }
}


void ShowNum::num_0(int NUM_PST){
for(int i=NUM_PST+9;i<NUM_PST+16;i=i+6){
  this->leds[i]=CRGB::HotPink;
}
for(int i=NUM_PST+16;i<NUM_PST+23;i=i+6){
  this->leds[i]=CRGB::HotPink;
}
for(int i=NUM_PST+25;i<NUM_PST+32;i++){
  this->leds[i]=CRGB::HotPink;
}
for(int i=NUM_PST;i<NUM_PST+7;i++){
  this->leds[i]=CRGB::HotPink;
}
FastLED.show();

}

void ShowNum::num_1(int NUM_PST){
  for(int i=NUM_PST+15;i<NUM_PST+23;i++){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+4]=CRGB::HotPink;
  this->leds[NUM_PST+10]=CRGB::HotPink;
  this->leds[NUM_PST]=CRGB::HotPink;
  this->leds[NUM_PST+31]=CRGB::HotPink;
  FastLED.show();
}
void ShowNum::num_2(int NUM_PST){
  for(int i=NUM_PST;i<NUM_PST+4;i++){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+6]=CRGB::HotPink;
  this->leds[NUM_PST+9]=CRGB::HotPink;
  this->leds[NUM_PST+12]=CRGB::HotPink;
  this->leds[NUM_PST+15]=CRGB::HotPink;
  this->leds[NUM_PST+16]=CRGB::HotPink;
  this->leds[NUM_PST+19]=CRGB::HotPink;
  this->leds[NUM_PST+22]=CRGB::HotPink;
  for(int i=NUM_PST+25;i<NUM_PST+29;i++){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+31]=CRGB::HotPink;
  FastLED.show();
}
void ShowNum::num_3(int NUM_PST){
  for(int i=NUM_PST;i<NUM_PST+8;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+9;i<NUM_PST+16;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+16;i<NUM_PST+23;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+25;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  FastLED.show();
  }

void ShowNum::num_4(int NUM_PST){
  for(int i=NUM_PST+3;i<NUM_PST+7;i++){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+25;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+12]=CRGB::HotPink;
  this->leds[NUM_PST+19]=CRGB::HotPink;
  FastLED.show();
  }
void ShowNum::num_5(int NUM_PST)
{
  this->leds[NUM_PST]=CRGB::HotPink;
  for(int i=NUM_PST+3;i<NUM_PST+7;i++){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+9;i<NUM_PST+16;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+16;i<NUM_PST+23;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+25]=CRGB::HotPink;
  for(int i=NUM_PST+28;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  FastLED.show();
}
void ShowNum::num_6(int NUM_PST){
  for(int i=NUM_PST;i<NUM_PST+7;i++){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+9;i<NUM_PST+16;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+16;i<NUM_PST+23;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+28;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  this->leds[NUM_PST+25]=CRGB::HotPink;
  FastLED.show();
}
void ShowNum::num_7(int NUM_PST){
  this->leds[NUM_PST+6]=CRGB::HotPink;
  this->leds[NUM_PST+9]=CRGB::HotPink;
  this->leds[NUM_PST+22]=CRGB::HotPink;
  for(int i=NUM_PST+25;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  FastLED.show();
}
void ShowNum::num_8(int NUM_PST){
  for(int i=NUM_PST+9;i<NUM_PST+16;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+16;i<NUM_PST+23;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+25;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST;i<NUM_PST+7;i++){
    this->leds[i]=CRGB::HotPink;
  }
  FastLED.show();
}
void ShowNum::num_9(int NUM_PST){
  for(int i=NUM_PST+3;i<NUM_PST+7;i++){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+9;i<NUM_PST+13;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+19;i<NUM_PST+23;i=i+3){
    this->leds[i]=CRGB::HotPink;
  }
  for(int i=NUM_PST+25;i<NUM_PST+32;i++){
    this->leds[i]=CRGB::HotPink;
  }
  FastLED.show();
}