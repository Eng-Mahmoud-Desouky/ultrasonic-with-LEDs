long t=0,d=0;
int trig = 2;
int echo = A0;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;

void setup()
{
pinMode(2,OUTPUT);
pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
digitalWrite(trig,0);
delayMicroseconds (2);
digitalWrite(trig,1);
delayMicroseconds (10);
digitalWrite(trig,0);
t = pulseIn(echo,1);
d = 0.0343*t/2;
Serial.println(d);
delay(5);
  
  if(d <= 70){
    digitalWrite(led1,1);
    digitalWrite(led2,0);
      digitalWrite(led3,0);
      digitalWrite(led4,0);
    
    }
    else if (d <= 140 && d > 70 ){
     digitalWrite(led1,1);
     digitalWrite(led2,1);
      digitalWrite(led3,0);
      digitalWrite(led4,0);
    }
    else if (d <= 210 && d > 140 ){
     digitalWrite(led1,1);
     digitalWrite(led2,1);
      digitalWrite(led3,1);
      digitalWrite(led4,0);
    }
    else if (d <= 282 && d > 210 ){
     digitalWrite(led1,1);
     digitalWrite(led2,1);
      digitalWrite(led3,1);
      digitalWrite(led4,1);
    }
    else{
     digitalWrite(led1,0);
     digitalWrite(led2,0);
      digitalWrite(led3,0);
      digitalWrite(led4,0);
      }
  delay(100);
}
