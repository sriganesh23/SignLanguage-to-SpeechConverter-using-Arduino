// This is code for the detecting movement of the fingers using flex sensors and gives the output with 8 channel voice module with a speaker.
// This code belongs to Gubbala Sri Ganesh
// 21BEC7184 - Vellore Institute of Technology, Andhra Pradesh

#define fs1 A0
#define fs2 A1
#define fs3 A2
#define fs4 A3

#define v1 2
#define v2 3
#define v3 4
#define v4 5
#define v5 6
#define v6 7
#define v7 8
#define v8 9

int f1,f2,f3,f4,md=0,f1r,f2r,f3r,f4r;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(v1,OUTPUT);
pinMode(v2,OUTPUT);
pinMode(v3,OUTPUT);
pinMode(v4,OUTPUT);
pinMode(v5,OUTPUT);
pinMode(v6,OUTPUT);
pinMode(v7,OUTPUT);
pinMode(v8,OUTPUT);
Serial.begin(9600);
digitalWrite(v1,1);
digitalWrite(v2,1);
digitalWrite(v3,1);
digitalWrite(v4,1);
digitalWrite(v5,1);
digitalWrite(v6,1);
digitalWrite(v7,1);
digitalWrite(v8,1);

for(int i=0;i<=9;i++)
{
f1r= f1r+analogRead(fs1);
f2r=f2r+analogRead(fs2);
f3r=f3r+analogRead(fs3);
f4r=f4r+analogRead(fs4);
delay(500);
}

f1r=f1r/10;
f2r=f2r/10;
f3r=f3r/10;
f4r=f4r/10;

}

void loop() {
  // put your main code here, to run repeatedly:

f1=analogRead(fs1);
f2=analogRead(fs2);
f3=analogRead(fs3);
f4=analogRead(fs4);

Serial.println("F1:"+ String(f1) + " | F2:"+ String(f2) + " | F3:" + String(f3) + " | F4:"+ String(f4));
delay(1000);



if(md==0)
{
if((f1r-f1)>50)
{
  Serial.println("Voice-1");
  digitalWrite(v1,0);
  delay(300);
  digitalWrite(v1,1);
  delay(4000);
}

if((f2r-f2)>50)
{
  Serial.println("Voice-2");
  digitalWrite(v2,0);
  delay(300);
  digitalWrite(v2,1);
  delay(4000);
}

if((f3r-f3)>50)
{
  Serial.println("Voice-3");
  digitalWrite(v3,0);
  delay(300);
  digitalWrite(v3,1);
  delay(4000);
}

if((f4r-f4)>50)
{
  Serial.println("Voice-4");
  digitalWrite(v4,0);
  delay(300);
  digitalWrite(v4,1);
  delay(4000);
}
}


if(md==1)
{
if((f1r-f1)>50)
{
  Serial.println("Voice-5");
  digitalWrite(v5,0);
  delay(300);
  digitalWrite(v5,1);
  delay(4000);
}

if((f2r-f2)>50)
{
  Serial.println("Voice-6");
  digitalWrite(v6,0);
  delay(300);
  digitalWrite(v6,1);
  delay(4000);
}

if((f3r-f3)>50)
{
  Serial.println("Voice-7");
  digitalWrite(v7,0);
  delay(300);
  digitalWrite(v7,1);
  delay(4000);
}

if((f4r-f4)>50)
{
  Serial.println("Voice-8");
  digitalWrite(v8,0);
  delay(300);
  digitalWrite(v8,1);
  delay(4000);
}
}

}
