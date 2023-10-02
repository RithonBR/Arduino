/* Gerador de onda quadrada com 4 saídas de frequência

Tab de frequências

ch1 ch0 Periodo Frequência

 0   0    5s      0,2Hz

 0   1    1s       1Hz

 1   0  500ms      2Hz

 1   1    2ms     500Hz



Ligações:

meio da Chave 1 (ch1) no pino 8 (cada ponta no VCC e no GND)

meio da Chave 0 (ch0) no pino 7 (cada ponta no VCC e no GND)

LED de saída e Buzzer (Alto Falante) no pino 13



Usando a biblioteca  LiquidCrystal Library para escrever no display LCD 16x2

Serve para qualquer display Hitachi com driver HD44780 driver e interface de 16 pinos.

  Ligações do display:

 

  * LCD RS pin to digital pin 12

  * LCD Enable pin to digital pin 11

  * LCD D4 pin to digital pin 5

  * LCD D5 pin to digital pin 4

  * LCD D6 pin to digital pin 3

  * LCD D7 pin to digital pin 2

  * LCD R/W pin to GND

  * LCD VSS pin to GND

  * LCD VCC pin to 5V

  * 10K resistor:

  * ends to +5V and ground

  * wiper to LCD VO pin (pin 3)



  http://www.arduino.cc/en/Tutorial/LiquidCrystal

*/
#include <LiquidCrystal.h> 

int Periodo_1 = 2500;
int Periodo_2 = 500;
int Periodo_3 = 250;
int Periodo_4 = 100;

int chave_1 = 21;
int chave_2 = 23;

int buzzer = 52;
int led_teste = 53;

int Numero_Linhas = 2;
int Numero_Colunas = 16;

const int rs = 8, en = 9, D4 = 4, D5 = 5, D6 = 6, D7 = 7;
LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

void setup(){
  lcd.begin(Numero_Colunas,Numero_Linhas);
  pinMode(buzzer,OUTPUT);
  pinMode(led_teste,OUTPUT);
  pinMode(chave_1,INPUT);
  pinMode(chave_2,INPUT);
}

void loop(){
  bool chave_1_b = digitalRead(chave_1);
  bool chave_2_b = digitalRead(chave_2);
  
  if (chave_1_b == false && chave_2_b == false){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("T = 5 segundos");
    lcd.setCursor(0,1);
    lcd.print("F = 0.2 HZ");
    
    digitalWrite(buzzer,HIGH);
    digitalWrite(led_teste,HIGH);
    delay(Periodo_1);
    digitalWrite(buzzer,LOW);
    digitalWrite(led_teste,LOW);
    delay(Periodo_1);
  }
  if (chave_2_b == true && chave_1_b == false){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("T = 1 segundos");
    lcd.setCursor(0,1);
    lcd.print("F = 1 HZ");
    
    digitalWrite(buzzer,HIGH);
    digitalWrite(led_teste,HIGH);
    delay(Periodo_2);
    digitalWrite(buzzer,LOW);
    digitalWrite(led_teste,LOW);
    delay(Periodo_2);
  }
  if (chave_1_b == true && chave_2_b == false){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("T = 500 ms");
    lcd.setCursor(0,1);
    lcd.print("F = 2 HZ");
    
    digitalWrite(buzzer,HIGH);
    digitalWrite(led_teste,HIGH);
    delay(Periodo_3);
    digitalWrite(buzzer,LOW);
    digitalWrite(led_teste,LOW);
    delay(Periodo_3);
  }
  if (chave_1_b == true && chave_2_b == true){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("T = 2 ms");
    lcd.setCursor(0,1);
    lcd.print("F = 500 HZ");
    
    digitalWrite(buzzer,HIGH);
    digitalWrite(led_teste,HIGH);
    delay(Periodo_4);
    digitalWrite(buzzer,LOW);
    digitalWrite(led_teste,LOW);
    delay(Periodo_4);
  }
  
  
}
