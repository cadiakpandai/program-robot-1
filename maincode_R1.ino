//ARDUINO MEGA 2560 PRO
//CADIAK PANDAI 2024
//DIBUAT OLEH FIRMANTO HERMANTO
//DIPROGRAM OLEH MUHAMMAD RAFIF
//DISETTING OLEH WILLY

// -------------------------- STIK PS ------------------------
#include <Psx.h>
Psx Psx;
#include <Wire.h>
#include <ezButton.h>
#define data    50
#define command 52
#define att     30
 #define clk     31

// ----------------------- MOTOR -------------------------------------
const int Motor[24] = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 32, 33, 34, 35, 36, 37, 38, 39};
const int PWMmotor[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const int switchPin = 53;
const int pneumatic =42;
const int pneumatic2 =43; 
int count =0;
;



unsigned int bacaData  =  0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Psx.setupPins(data, command, att, clk, 10);

  for(int m=0; m<=24; m++){pinMode(Motor[m]    , OUTPUT);}
  for(int p=0; p<=12; p++){pinMode(PWMmotor[p]    , OUTPUT);}
  pinMode(switchPin, INPUT);
  pinMode(pneumatic,OUTPUT);
  pinMode(pneumatic2,OUTPUT);
  digitalWrite(pneumatic,HIGH);
  digitalWrite(pneumatic2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  //// --------------- PSX ----------------

    bacaData = Psx.read();
    Serial.println(" || PSX : "); Serial.print(bacaData);
    delay(20);

    switch (bacaData) {

     case 8: Serial.println  (" --> ATAS"  ); kecMaju(170, 140, 190, 170); break;
     case 8200: Serial.println  (" --> l1 + ATAS"  ); kecMaju(220, 220, 220, 220); break;
     case 32776: Serial.println  (" --> L2 + ATAS"  ); kecMaju(50, 40, 60, 60); break;
     case 2: Serial.println  (" --> BAWAH" ); kecMundur(190, 160, 160, 130); break;
     case 32770: Serial.println  (" --> L2 + BAWAH" ); kecMundur(50, 50, 70, 50); break;
     case 4: Serial.println  (" --> KANAN" ); kecKanan(110,100, 110, 120); break;
     case 1: Serial.println  (" --> KIRI" ); kecKiri(90, 90, 100,90); break;
     case 8196: Serial.println("  L1 + KANAN");putarKanan(110,120,120,110);break;
     case 32772:Serial.println("  L2 + KANAN");kecKanan(60,80,100,60);break;
     case 8193: Serial.println("  L1 + KIRI");putarKiri(100,100,110,100);break;
     case 32769:Serial.println("  L2 + KIRI");putarKiri(40,40,60,40);break;
     case 512:Serial.println(" --> X");penembak(120,120);break;
     case 33280:Serial.println(" -- > L2 + X");penembakmati();break;
     case 8704:Serial.println(" --> L1 + X");penembak(120,120);break;
     case 1024:Serial.println(" -- > BULAT");gripperbolarev(100 ,100);break;
     case 5120:Serial.println(" -- > BULAT + R1");gripperbola(35,25);break;
     case 2048:Serial.println(" -- > SEGITIGA");NAIK(100);break;
     case 6144:Serial.println(" -- > R1 + SEGITIGA");TURUN(100);break;
     case 256:Serial.println(" -- > PETAK");digitalWrite(pneumatic,LOW); digitalWrite(pneumatic2,LOW);break;
     case 4352:Serial.println(" -- > R1 + PETAK");digitalWrite(pneumatic,HIGH);break;
     case 16640:Serial.println(" -- > R2 + PETAK");digitalWrite(pneumatic2,HIGH);break;


      default:
        //Serial.println("  --> MATI");
        enMotor_OFF();

         
       

    }
  }
