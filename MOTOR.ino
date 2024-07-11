void kecMaju(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[0], M1);
    digitalWrite(Motor[0], LOW);
    digitalWrite(Motor[1], HIGH);
    analogWrite(PWMmotor[1], M2);
    digitalWrite(Motor[2], HIGH);
    digitalWrite(Motor[3], LOW);
    analogWrite(PWMmotor[2], M3);
    digitalWrite(Motor[4], HIGH);
    digitalWrite(Motor[5], LOW);
    analogWrite(PWMmotor[3], M4);
    digitalWrite(Motor[6], LOW);
    digitalWrite(Motor[7], HIGH);   
}

void kecMundur(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[0], M1);
    digitalWrite(Motor[0], HIGH);
    digitalWrite(Motor[1], LOW);
    analogWrite(PWMmotor[1], M2);
    digitalWrite(Motor[2], LOW);
    digitalWrite(Motor[3], HIGH);
    analogWrite(PWMmotor[2], M3);
    digitalWrite(Motor[4], LOW);
    digitalWrite(Motor[5], HIGH);
    analogWrite(PWMmotor[3], M4);
    digitalWrite(Motor[6], HIGH);
    digitalWrite(Motor[7], LOW); 
}

void kecKanan(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[0], M1);
    digitalWrite(Motor[0], LOW);
    digitalWrite(Motor[1], HIGH);
    analogWrite(PWMmotor[1], M2);
    digitalWrite(Motor[2], LOW);
    digitalWrite(Motor[3], HIGH);
    analogWrite(PWMmotor[2], M3);
    digitalWrite(Motor[4], LOW);
    digitalWrite(Motor[5], HIGH);
    analogWrite(PWMmotor[3], M4);
    digitalWrite(Motor[6], LOW);
    digitalWrite(Motor[7], HIGH);
}

void kecKiri(byte M1, byte M2, byte M3, byte M4)
{
    analogWrite(PWMmotor[0], M1);
    digitalWrite(Motor[0], HIGH);
    digitalWrite(Motor[1], LOW);
    analogWrite(PWMmotor[1], M2);
    digitalWrite(Motor[2], HIGH);
    digitalWrite(Motor[3], LOW);
    analogWrite(PWMmotor[2], M3);
    digitalWrite(Motor[4], HIGH);
    digitalWrite(Motor[5], LOW);
    analogWrite(PWMmotor[3], M4);
    digitalWrite(Motor[6], HIGH);
    digitalWrite(Motor[7], LOW); 
}

void putarKanan(byte M1, byte M2, byte M3, byte M4)
{
  analogWrite(PWMmotor[0], M1);
  digitalWrite(Motor[0], LOW);
  digitalWrite(Motor[1], HIGH);
  analogWrite(PWMmotor[1], M2);
  digitalWrite(Motor[2], LOW);
  digitalWrite(Motor[3], HIGH);
  analogWrite(PWMmotor[2], M3);
  digitalWrite(Motor[4], HIGH);
  digitalWrite(Motor[5], LOW);
  analogWrite(PWMmotor[3], M4);
  digitalWrite(Motor[6], HIGH);
  digitalWrite(Motor[7], LOW);
}

void putarKiri(byte M1, byte M2, byte M3, byte M4)
{
  analogWrite(PWMmotor[0], M1);
  digitalWrite(Motor[0], HIGH);
  digitalWrite(Motor[1], LOW);
  analogWrite(PWMmotor[1], M2);
  digitalWrite(Motor[2], HIGH);
  digitalWrite(Motor[3], LOW);
  analogWrite(PWMmotor[2], M3);
  digitalWrite(Motor[4], LOW);
  digitalWrite(Motor[5], HIGH);
  analogWrite(PWMmotor[3], M4);
  digitalWrite(Motor[6], LOW);
  digitalWrite(Motor[7], HIGH);
}


void penembak(byte M1,byte M2)
{
  analogWrite(PWMmotor[4], M1);
  digitalWrite(Motor[8], HIGH);
  digitalWrite(Motor[9], LOW);
  analogWrite(PWMmotor[5], M2);
  digitalWrite(Motor[10], LOW);
  digitalWrite(Motor[11], HIGH);
}

void penembakmati()
{
  analogWrite(PWMmotor[4], 0);
  digitalWrite(Motor[8], LOW);
  digitalWrite(Motor[9], LOW);
  analogWrite(PWMmotor[5], 0);
  digitalWrite(Motor[10], LOW);
  digitalWrite(Motor[11], HIGH);
}

void gripperbola(byte M1, byte M2)
{
  analogWrite(PWMmotor[6], M1);
  digitalWrite(Motor[12], HIGH);
  digitalWrite(Motor[13], LOW);
  analogWrite(PWMmotor[7], M2);
  digitalWrite(Motor[14], LOW);
  digitalWrite(Motor[15], HIGH);
}

void gripperbolarev(byte M1, byte M2)
{
  analogWrite(PWMmotor[6], M1);
  digitalWrite(Motor[12], LOW);
  digitalWrite(Motor[13], HIGH);
  analogWrite(PWMmotor[7], M2);
  digitalWrite(Motor[14], HIGH);
  digitalWrite(Motor[15], LOW);
}

void enMotor_OFF ()
{
  analogWrite(PWMmotor[0], 0);
  analogWrite(PWMmotor[1], 0);
  analogWrite(PWMmotor[2], 0);
  analogWrite(PWMmotor[3], 0);
  analogWrite(PWMmotor[6], 0);
  analogWrite(PWMmotor[7], 0);
}
