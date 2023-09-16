class WaitPushButton{
private :
uint8_t led_pin,PbON_pin,PbOFF_pin;
uint16_t delaytime=1000,T=0;
public :
void init();
void waits();
void waitms();
void waits(uint16_t dealy);
void waitms(uint16_t delay1);
WaitPushButton(uint8_t  led,uint8_t  pb_ON, uint8_t  pb_OFF,uint16_t  mstime);
WaitPushButton(uint8_t  led,uint8_t  pb_ON, uint8_t  pb_OFF);
};
WaitPushButton :: WaitPushButton(uint8_t  led,uint8_t  pb_ON, uint8_t  pb_OFF,uint16_t  mstime){
led_pin=led;
PbON_pin=pb_ON;
PbOFF_pin=pb_OFF;
delaytime=mstime;
}
WaitPushButton :: WaitPushButton(uint8_t  led,uint8_t  pb_ON, uint8_t  pb_OFF){
led_pin=led;
PbON_pin=pb_ON;
PbOFF_pin=pb_OFF;
}
void WaitPushButton :: init(){
    pinMode(led_pin,OUTPUT);
    pinMode(PbON_pin,INPUT);
    pinMode(PbOFF_pin,INPUT);
}
void WaitPushButton :: waits(){
    if (digitalRead(PbON_pin)){
    T=millis();
    digitalWrite(led_pin,HIGH);}
    if (digitalRead(PbOFF_pin)||millis()-T>=delaytime){
            digitalWrite(led_pin,LOW);}
    }
    void WaitPushButton :: waitms(){
    if (digitalRead(PbON_pin)){
    T=millis();
    digitalWrite(led_pin,HIGH);}
    if (digitalRead(PbOFF_pin)||millis()-T>=delaytime){
            digitalWrite(led_pin,LOW);}
    }
void WaitPushButton :: waits(uint16_t delay){
    if (digitalRead(PbON_pin)){
    T=millis();
    digitalWrite(led_pin,HIGH);}
    if (digitalRead(PbOFF_pin)||millis()-T>=delay){
            digitalWrite(led_pin,LOW);}
    }
void WaitPushButton :: waitms(uint16_t delay1){
    if (digitalRead(PbON_pin)){
    T=millis();
    digitalWrite(led_pin,HIGH);}
    if (digitalRead(PbOFF_pin)||millis()-T>=delay1){
            digitalWrite(led_pin,LOW);}
    }
WaitPushButton x(8,9,10);
void setup() {
x.init();
}
void loop() {
x.waitms(5000);
}
