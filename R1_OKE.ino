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
int motorSpeed = 0;
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
  //int soft_speed = soft_speedM; 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //// --------------- PSX ----------------

    bacaData = Psx.read();
    Serial.println(" || PSX : "); Serial.print(bacaData);
    delay(20);

    switch (bacaData) {

     case 8: Serial.println  (" --> ATAS"  );     kecMaju(190, 200, 200, 180); break;
    // soft_speedM();
     break;
     case 9: Serial.println  (" --> ATAS + KIRI"  ); (0, 200, 200, 0); break;
     case 17408: Serial.println (" --> R2 + BULAT"  );putarKanan(110,120,120,110) ; gripperbola(50,30); TURUN(250); break;
     case 8200: Serial.println  (" --> L1 + ATAS"  ); kecMaju(250, 250, 250, 250); break;
     case 12296: Serial.println  (" --> L1 + L2 + ATAS"  ); belokkiri(250, 150, 250, 0); break;
     
     case 32776: Serial.println  (" --> L2 + ATAS"  ); kecMaju(50, 40, 60, 60); break;
 case 2: Serial.println  (" --> BAWAH" );(46,50,50,45); kecMundur(190, 200, 200, 180); break;
     case 32770: Serial.println  (" --> L2 + BAWAH" ); kecMundur(50, 50, 70, 50); break;
     case 4: Serial.println  (" --> KANAN" ); kecKanan(220,200, 210, 220); break;
     case 1: Serial.println  (" --> KIRI" ); kecKiri(120, 120, 130,130); break;
     case 8196: Serial.println("  L1 + KANAN");putarKanan(110,120,120,110);break;
     case 16388: Serial.println("  R2 + KANAN");putarKanan(50,65,90,50);break;
     case 32772:Serial.println("  L2 + KANAN");kecKanan(60,80,100,60);break;
     case 8193: Serial.println("  L1 + KIRI");putarKiri(100,100,110,100);break;
     case 16385: Serial.println("  R2 + KIRI");putarKiri(50,50,60,50);break;
     case 32769:Serial.println("  L2 + KIRI");kecKiri(80, 60, 80,100); break;
     case 512:Serial.println(" --> X");penembak(120,120);break;
     case 33280:Serial.println(" -- > L2 + X");penembakmati();break;
     case 8704:Serial.println(" --> L1 + X");penembak(130,130);break;
     case 1024:Serial.println(" -- > BULAT");gripperbolarev(100 ,100);break;
     case 5120:Serial.println(" -- > BULAT + R1");gripperbola(35,25);break;
     case 2048:Serial.println(" -- > SEGITIGA");NAIK(130);break;
     case 6144:Serial.println(" -- > R1 + SEGITIGA");TURUN(200);break;
     case 256:Serial.println(" -- > PETAK");digitalWrite(pneumatic,LOW) ;break;
     case 4352:Serial.println(" -- > R1 + PETAK");digitalWrite(pneumatic,HIGH);break;
     
     


      default:
        //Serial.println("  --> MATI");
         //soft_speedM();
        enMotor_OFF();

         
       

    }
  }
