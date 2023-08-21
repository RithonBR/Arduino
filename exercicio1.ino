// Aula de 21/08/2023
// Exercicio-01
/* Lista de atividades:
a) Criar um sketch que faça o LED vermelho, que está conectado ao pino 13 do Arduino
UNO piscar continuamente a cada 1 segundo. Não usar variáveis.
Atenção, salvar o arquivo como "Exercicio-01A".

b)criar uma variável inteira "pinoLED" e atribuir o valor do pino 13 a esta variável
também criar uma variável "tempoEspera" e atribuir o valor de 1 segundo a mesma.
Executar o mesmo programa do item a) só que com variáveis.
Atenção, salvar o arquivo como "Exercicio-01B".

c) Criar uma variável que incremente seu valor em cada passagem do loop e escreva esse 
valor no monitor serial do Arduino.
Atenção, salvar o arquivo como "Exercicio-01C".

Use a estrutura base abaixo para iniciar a programação.
*/
int incremento = 0;


/*-----------------------Exercicio-01B----------------
int pinoLedVer1 = 38;
int tempoEspera = 1000;
*/
void setup() {
  // put your setup code here, to run once:
  //Define a porta do led como saida
 

/*-----------------------Exercicio-01B----------------
  pinMode(pinoLedVer1,OUTPUT);
*/

/*-----------------------Exercicio-01A----------------
  pinMode(38, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(50, OUTPUT);
  */
}

void loop() {

/*-----------------------Exercicio-01B----------------
  digitalWrite(pinoLedVer1, HIGH);
  delay(tempoEspera);
  digitalWrite(pinoLedVer1, LOW);
  delay(tempoEspera);
*/
/* -----------------------Exercicio-01A----------------
  digitalWrite(38, HIGH);
  digitalWrite(44, HIGH);
  digitalWrite(50, HIGH);
  delay(1000);
  digitalWrite(38, LOW);
  digitalWrite(44, LOW);
  digitalWrite(50, LOW);
  delay(1000);
*/
}
