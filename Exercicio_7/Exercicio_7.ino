// Aula de 11/09/2023
// Exercicio-2
/* Lista de atividades:

Controle de LED com Interruptor (On/Off):
Conecte um LED a um pino, por exemplo, o GPIO 13, e um interruptor a outro pino, 
por exemplo, o GPIO 2. 
Escreva um programa que liga o LED quando o botão for pressionado e 
o desliga quando o botão for liberado.

ATENÇÃO, NÃO USE ESTRUTURA IF E SIM WHILE PARA VERIFICAR A CONDIÇÃO SE A CHAVE ESTÁ LIGADA OU DESLIGADA.

*/

int botao = 22;
int led = 38;

void setup(){

  pinMode(botao,INPUT);
  pinMode(led,OUTPUT);

}  

void loop(){

bool estado = digitalRead(botao);

while (estado == true){
  digitalWrite(led,HIGH);
  break;
}

while (estado == false){
  digitalWrite(led,LOW);
  break;
}

}
