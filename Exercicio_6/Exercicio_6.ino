// Aula de 11/09/2023
// Exercicio-1
/* Lista de atividades:

Controle de LED com Interruptor (On/Off):
Conecte um LED a um pino, por exemplo, o GPIO 13, e um interruptor a outro pino, 
por exemplo, o GPIO 2. 
Escreva um programa que liga o LED quando o botão for pressionado e 
o desliga quando o botão for liberado.

*/

int botao = 22;

void setup(){

  pinMode(38,OUTPUT);
  pinMode(botao,INPUT);

}  

void loop(){
  bool estado = digitalRead(botao);

if (estado == true){
  digitalWrite(38,HIGH);
}else{
  digitalWrite(38,LOW);
}
}
