/* Questão 3 (3 pontos): Prova 1 de Lógica de Programação - LGP18802
  27.09.2023 - prof. Alexandre Nuernberg
      
   Atenção: 
      - Defina variáveis para armazenamento dos pinos dos LEDS e dos tempos. (se necessário)
      - Mantenha o programa organizado com formatação (endentação).
      - Comente as principais partes do programa para que haja um entendimento claro.
      - Salve frequentemente o sketch no PENDRIVE para evitar perder o trabalho
      - Salve o sketch com nome: Questao03_Prova01_Seu_Nome_Completo (não use espaços nem acentos)
      - Após testar e terminar envie o arquivo pelo siga no final da prova.
  
Dados os seguintes LEDs:
L8 - vermelho - pino 38
L7 - amarelo - pino 40
L6 - verde - pino 42
L5 - vermelho - pino 44
L4 - amarelo - pino 46
L3 - verde - pino 48
L2 - vermelho - pino 50
L1 - verde - pino 52

Dadas as seguintes chaves:
ch01 - pino 22
ch02 - pino 24

a) (1 ponto) Faça um programa que se a chave ch01 estiver em 1 (nivel alto), faça com que pisquem todos os LEDs vermelhos ao mesmo tempo.
use um intervalo de tempo de piscada de 500ms.

b) (1 ponto) Continue nesse mesmo programa e agora faça com que caso a chave ch02 estiver ligada (em nivel alto) pisquem todos os LEDs amarelos,
começando de 100ms e a cada loop ir aumentando o tempo de piscada em 100ms, até 1s) (ex: 100ms -> 200ms -> 300ms ... até 1s).
Chegando em 1s manter o tempo de piscada em 1s.
Imprima o valor do tempo de piscada dos LEDs amarelos no monitor serial.

c) (1 ponto) Agora ajuste o programa, de forma que se as chaves ch01 e ch02 estiverem em 0 (desligadas) os leds vermelhos e amarelos fiquem apagados e os 
LEDs Verdes pisquem incrementando o valor, começando em 100ms e incrementando de 100 em 100ms.
Também escreva no monitor serial o tempo de piscada, exemplo:
Tempo LED Verde = 100
Tempo LED Verde = 200
Tempo LED Verde = 300


*/
// iniciação das variaveis
int tempoDelay_500 = 500;
int tempoDelay_100 = 100;
int tempoDelayVerdes_100 = 100;

int ledVermelho_1 = 38;
int ledVermelho_2 = 44;
int ledVermelho_3 = 50;

int ledAmarelo_1 = 40;
int ledAmarelo_2 = 46;

int ledVerde_1 = 42;
int ledVerde_2 = 48;
int ledVerde_3 = 52;

int chave_1 = 22;
int chave_2 = 24;

bool chave_1_Ligada= false;
bool chave_2_Ligada= false;

bool delayAmarelos = true;

void setup()
{
  pinMode(chave_1,INPUT);
  pinMode(chave_2,INPUT);

  pinMode(ledVermelho_1,OUTPUT);
  pinMode(ledVermelho_2,OUTPUT);
  pinMode(ledVermelho_3,OUTPUT);

  pinMode(ledAmarelo_1,OUTPUT);
  pinMode(ledAmarelo_2,OUTPUT);

  pinMode(ledVerde_1,OUTPUT);
  pinMode(ledVerde_2,OUTPUT);
  pinMode(ledVerde_3,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  delayAmarelos = true;
  
  // puxar estado das chaves
  chave_1_Ligada = digitalRead(chave_1);
  chave_2_Ligada = digitalRead(chave_2);
  
   // ligar vermelhos
  if ( chave_1_Ligada == true){
    digitalWrite(ledVermelho_1,HIGH);
    digitalWrite(ledVermelho_2,HIGH);
    digitalWrite(ledVermelho_3,HIGH);
    delay(tempoDelay_500);
    digitalWrite(ledVermelho_1,LOW);
    digitalWrite(ledVermelho_2,LOW);
    digitalWrite(ledVermelho_3,LOW);
    delay(tempoDelay_500);
  }

  
  // Ligar amarelos
  if ( chave_2_Ligada == true){
    digitalWrite(ledAmarelo_1,HIGH);
    digitalWrite(ledAmarelo_2,HIGH);
    delay(tempoDelay_100);
    digitalWrite(ledAmarelo_1,LOW);
    digitalWrite(ledAmarelo_2,LOW);
    delay(tempoDelay_100);
    if (tempoDelay_100 < 1000){
      if (delayAmarelos == true){
       Serial.println("tempo de delay dos amarelos antigo = " + String(tempoDelay_100));
       tempoDelay_100 = tempoDelay_100 + 100;
       Serial.println("tempo de delay dos amarelos novo = " + String(tempoDelay_100));
       delayAmarelos = false;
      }
    }
  }

  // Ligar Verdes
  if (chave_1_Ligada == false && chave_2_Ligada == false){
    digitalWrite(ledVerde_1,HIGH);
    digitalWrite(ledVerde_2,HIGH);
    digitalWrite(ledVerde_3,HIGH);
    delay(tempoDelayVerdes_100);
    digitalWrite(ledVerde_1,LOW);
    digitalWrite(ledVerde_2,LOW);
    digitalWrite(ledVerde_3,LOW);
    delay(tempoDelayVerdes_100);
    Serial.println("Tempo do led Verde = " + String(tempoDelayVerdes_100));
    tempoDelayVerdes_100 = tempoDelayVerdes_100 + 100;
  }
  
}
