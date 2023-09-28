/* Questão 1 (3 pontos): Prova 1 de Lógica de Programação - LGP18802
  27.09.2023 - prof. Alexandre Nuernberg
      
  Sabendo-se que a fórmula para calcular o volume de uma esfera é:
  𝑉𝑒𝑠𝑓𝑒𝑟𝑎 = (4/3) × 𝜋 × 𝑟𝑎𝑖𝑜^3.
  Dado 3 raios: 
  raio1 = 5m
  raio2 = 4m
  raio3 = 3m  

  Atenção: 
      - Defina variáveis para armazenamento dos pinos dos LEDS e dos tempos. (se necessário)
      - Mantenha o programa organizado com formatação (endentação).
      - Comente as principais partes do programa para que haja um entendimento claro.
      - Salve frequentemente o sketch no PENDRIVE para evitar perder o trabalho
      - Salve o sketch com nome: Questao01_Prova01_Seu_Nome_Completo (não use espaços nem acentos)
      - Após testar e terminar envie o arquivo pelo siga no final da prova.
      
  a) (1 ponto) Calcule o volume das 3 esferas e imprima o resultado no monitor serial informando a que espera pertence o resultado.
  Considere pi = 3.14
  Defina variáveis para armazenar o Volume da esfera e o raio.
  Use variáveis de ponto flutuante.

  b) (1 ponto) Caso algum dos volumes seja superior a 250, faça com que o led correspondente pisque (1s aceso e 1s apagado) obedecendo 
  a ordem de cores:
  para Vesfera1 > 250 pisca o LED vermelho do pino 38
  para Vesfera2 > 250 pisca o LED amarelo do pino 40
  para Vesfera3 > 250 pisca o LED verde do pino 42

  c) (1 ponto) Se algum volume for maior do que 250, na hora que o LED correspondente piscar, informe qual volume é maior do que 250 imprimindo a mensagem no monitor serial.



*/
// inicia as variaveis pedidas
float pi = 3.14;

int raio_1 = 5;
int raio_2 = 4;
int raio_3 = 3;

float calculoRaio_1 = (4/3) * pi * (raio_1*raio_1*raio_1);
float calculoRaio_2 = (4/3) * pi * (raio_2*raio_2*raio_2);
float calculoRaio_3 = (4/3) * pi * (raio_3*raio_3*raio_3);

int tempoDelay = 1000;

int ledVermelho = 38;
int ledAmarelo = 40;
int ledVerde = 42;


void setup()
{
  // inicia o serial
  Serial.begin(9600);
  // mostra o resultado no serial
  Serial.println("O resultado do calculo com o raio de 5 é = " + String(calculoRaio_1));
  Serial.println("O resultado do calculo com o raio de 4 é = " + String(calculoRaio_2));
  Serial.println("O resultado do calculo com o raio de 3 é = " + String(calculoRaio_3));
  // inicia os OUTPUTS
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
}

void loop() {
  // Pisca o led vermelho se for maior que 250
  if (calculoRaio_1 > 250){
    digitalWrite(ledVermelho,HIGH);
    delay(tempoDelay);
    digitalWrite(ledVermelho,LOW);
    delay(tempoDelay);
  }
  // Pisca o led amarelo se for maior que 250
  if (calculoRaio_2 > 250){
    digitalWrite(ledAmarelo,HIGH);
    delay(tempoDelay);
    digitalWrite(ledAmarelo,LOW);
    delay(tempoDelay);
  }
  // Pisca o led verde se for maior que 250
  if (calculoRaio_3 > 250){
    digitalWrite(ledVerde,HIGH);
    delay(tempoDelay);
    digitalWrite(ledVerde,LOW);
    delay(tempoDelay);
  }
  
}
