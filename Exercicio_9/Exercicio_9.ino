// Aula de 11/09/2023
// Exercicio-3
/* Lista de atividades:

Piscando LEDs Alternados:
Conecte dois LEDs a pinos separados, por exemplo, GPIO 7 e GPIO 6. 
Escreva um programa que faça os LEDs piscarem alternadamente (um aceso enquanto o outro está apagado)
a cada segundo. 
Use um botão conectado a outro pino, por exemplo, GPIO 2, para iniciar e parar a alternância dos LEDs
quando ligado.

Ex: botão desligado => LEDs piscam alternadamente
botão ligado => LEDs acesos, mas sem piscar


ATENÇÃO, USE UMA ESTRUTURA CONDICIONAL WHILE

*/

int botao = 22;
int led1 =38;
int led2 =40;

void setup(){

pinMode(botao,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

}  

void loop(){

bool estado = digitalRead(botao);

while (estado == false){
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  break;
}

while (estado == true){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  break;
}


}
