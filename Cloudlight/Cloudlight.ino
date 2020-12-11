void setup() 
{
pinMode(3,OUTPUT);//InnerLED-G
pinMode(5,OUTPUT);//InnerLED-B
pinMode(6,OUTPUT);//InnerLED-R

pinMode(9,OUTPUT);//OuternLED-R
pinMode(11,OUTPUT);//OuternLED-P
pinMode(13,OUTPUT);//BoardLED-R

digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(11,LOW);
digitalWrite(13,LOW);
}

void loop() {
for(int i=0;i<200;i++)
{
analogWrite(9,i);
analogWrite(11,i);
}

void LED_red_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 240; r++)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 0; g < 1; g++)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 0; b < 1; b++)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_orange_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 220; r++)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 0; g < 40; g++)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 0; b < 5; b++)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_green_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 30; r++)
  {
    analogWrite(6, r);
    delay(10);
  }
  for (int g = 0; g < 200; g++)
  {
    analogWrite(5, g);
    delay(2);
  }
  for (int b = 0; b < 10; b++)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_blue_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 30; r++)
  {
    analogWrite(6, r);
    delay(10);
  }
  for (int g = 0; g < 90; g++)
  {
    analogWrite(5, g);
    delay(4);
  }
  for (int b = 0; b < 200; b++)
  {
    analogWrite(3, b);
    delay(2);
  }
}

void LED_purple_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 220; r++)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 0; g < 30; g++)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 0; b < 200; b++)
  {
    analogWrite(3, b);
    delay(5);
  }
}

void LED_pink_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 220; r++)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 0; g < 15; g++)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 0; b < 15; b++)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_yellow_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 220; r++)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 0; g < 70; g++)
  {
    analogWrite(5, g);
    delay(5);
  }
  for (int b = 0; b < 1; b++)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_white_FADEIN()
{
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(3, 0);
  for (int r = 0; r < 240; r++)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 0; g < 130; g++)
  {
    analogWrite(5, g);
    delay(5);
  }
  for (int b = 0; b < 70; b++)
  {
    analogWrite(3, b);
    delay(5);
  }
}

void LED_red_FADEOUT()
{
  analogWrite(6, 240);
  analogWrite(5, 1);
  analogWrite(3, 1);
  for (int r = 240; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 1; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 1; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_orange_FADEOUT()
{
  analogWrite(6, 220);
  analogWrite(5, 40);
  analogWrite(3, 5);
  for (int r = 220; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 40; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 5; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_green_FADEOUT()
{
  analogWrite(6, 30);
  analogWrite(5, 200);
  analogWrite(3, 10);
  for (int r = 30; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(10);
  }
  for (int g = 200; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(2);
  }
  for (int b = 10; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_blue_FADEOUT()
{
  analogWrite(6, 30);
  analogWrite(5, 90);
  analogWrite(3, 200);
  for (int r = 30; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(10);
  }
  for (int g = 90; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(4);
  }
  for (int b = 200; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(2);
  }
}

void LED_purple_FADEOUT()
{
  analogWrite(6, 220);
  analogWrite(5, 30);
  analogWrite(3, 200);
  for (int r = 220; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(5);
  }
  for (int g = 30; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 200; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(2);
  }
}

void LED_pink_FADEOUT()
{
  analogWrite(6, 220);
  analogWrite(5, 15);
  analogWrite(3, 15);
  for (int r = 220; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(2);
  }
  for (int g = 15; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(10);
  }
  for (int b = 15; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_yellow_FADEOUT()
{
  analogWrite(6, 220);
  analogWrite(5, 70);
  analogWrite(3, 1);
  for (int r = 220; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 70; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(5);
  }
  for (int b = 1; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(10);
  }
}

void LED_white_FADEOUT()
{
  analogWrite(6, 240);
  analogWrite(5, 130);
  analogWrite(3, 70);
  for (int r = 240; r >= 0; r--)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 130; g >= 0; g--)
  {
    analogWrite(5, g);
    delay(5);
  }
  for (int b = 70; b >= 0; b--)
  {
    analogWrite(3, b);
    delay(5);
  }
}

void LED_NORMAL()
{
  for (int r = 0; r <= 47; r++)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 0; g <= 242; g++)
  {
    analogWrite(5, g);
    delay(1);
  }
  for (int b = 0; b <= 124; b++)
  {
    analogWrite(3, b);
    delay(1);
  }
  for (int r = 47; r <= 140; r++)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 242; g >= 21; g--)
  {
    analogWrite(5, g);
    delay(1);
  }
  for (int b = 124; b >= 54; b--)
  {
    analogWrite(3, b);
    delay(1);
  }
  for (int r = 140; r <= 240; r++)
  {
    analogWrite(6, r);
    delay(1);
  }
  for (int g = 21; g <= 130; g++)
  {
    analogWrite(5, g);
    delay(1);
  }
  for (int b = 54; b <= 70; b++)
  {
    analogWrite(3, b);
    delay(1);
  }
}
