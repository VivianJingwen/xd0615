int pinInterrupt=2;
int tick = 0; //计数值
int state=0;
//中断服务程序
void myfunc()
{
  Serial.print("Number: ");
  Serial.println(tick++);
  state=~state;
  digitalWrite(13,state);}
 
void setup()
{
  Serial.begin(9600); //初始化串口
  pinMode(13,OUTPUT);
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
void loop()
{
  
}
