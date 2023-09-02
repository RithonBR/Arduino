// Aula de 30/08/2023
// Exercicio-5
/* Lista de atividades:

a) Faça um programa que converta o valor dos produtos abaixos de Real para dolar e mostre no monitor serial
Considere que R$4.88 seja equivalente a US$1.00.

Arduino Uno = R$17.45
Shield Display LCD = R$14.35
LEDs sortidos = R$0.35

*/

float conversao = 4.88;
float ArduinoUno = 17.45;
float ShieldDisplayLCD = 14.35;
float LEDsSortidos = 0.35;

void setup(){
  Serial.begin(9600);
  float ArduinoUnoDolar = ArduinoUno/conversao;
  float ShieldDisplayLCDDolar = ShieldDisplayLCD/conversao;
  float LEDsSortidosDolar = LEDsSortidos/conversao;

  Serial.println("----------");
  Serial.print("O preco em real do arduino uno e :");
  Serial.println(ArduinoUno);
  Serial.print("O preco em real do Shield display LCD e :");
  Serial.println(ShieldDisplayLCD);
  Serial.print("O preco em real do LED sortido e :");
  Serial.println(LEDsSortidos);
  Serial.println("----------");
  Serial.print("O preco em dolar do arduino uno e :");
  Serial.println(ArduinoUnoDolar);
  Serial.print("O preco em dolar do Shield display LCD e :");
  Serial.println(ShieldDisplayLCDDolar);
  Serial.print("O preco em dolar do LED sortido e :");
  Serial.println(LEDsSortidosDolar);
  

}  

void loop(){

}
