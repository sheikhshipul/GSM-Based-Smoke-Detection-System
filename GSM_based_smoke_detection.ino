#include <Wire.h>
#include <SoftwareSerial.h>
SoftwareSerial Gsm(3,4);
char phone_no[] = "01674797711"; 
char msg;
 String message;
char str[15];
int smoke  = 2;


void setup() {

  delay(100);
  
 Gsm.begin(9600);    
Gsm.println("AT+CNMI=2,2,0,0,0");// AT Command to receive a live SMS
Serial.println("AT+CNMI=2,2,0,0,0");
  
  Serial.begin(9600);
pinMode(2,INPUT);

}

void loop() {
int smoke11 = digitalRead(2);
 Serial.println(smoke11);

if(smoke11 == HIGH ){

}

if(smoke11 == LOW ){
 
 Serial.println("Smoke Detected");
  Gsm.print("AT+CMGF=1\r"); 
    delay(20);
      Gsm.print("AT+CMGS=\"");
        Gsm.print(phone_no);
          Gsm.println("\"");  
            delay(20);
              Gsm.print("Smoke Detected");
                delay(20);
                  Gsm.println((char)26); 
                    delay(20);
                      Gsm.println(); 
    delay(3000);
}


delay(1000);
}
