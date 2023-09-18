/* Exercicío preparatório para a prova

Prova 1 de Lógica de Programação - LGP18802 de 2023/01

24/04/2023 prof. Alexandre Nuernberg

  

  Questão 2: (4 pontos)

    a) A fórmula para o cálculo do volume de um cilindro é ?*r²*h.

    Calcule o volume de 3 cilindros (vc1, vc2 e vc3), sabendo que seus raios são:

    rc1 = 0,42m; rc2 = 0,33m e rc3 = 1m.

    As alturas dos cilindros são: hc1 = 0,5m; hc2 = 1m e hc3 = 0,6m

    Considere o valor de Pi = 3.14

    *Mostre o valor calculado para os 3 volumes no monitor serial especificando 

    quem é quem,

    e com precisão de pelo menos duas casas decimais depois do ponto.

    

    b) Agora que você tem os 3 volumes calculados, verifique se algum deles é 

    maior ou igual a 

    1m3 caso seja, escreva no monitor serial qual(quais) do(s) volume(s) tem 

    mais de 1m3.

    Escreva a mensagem no monitor serial apenas uma vez!

    

    c) Se no item b) houver algum volume maior do que 1m3, faça com que um LED 

    acenda informando

    que houve volume maior que 1m3, obedecendo a seguinte ordem de LEDS:

    Se vc1 > 1m3 => Piscar LED vermelho, que está no pino 13

    Se vc2 > 1m3 => Piscar LED laranja,  que está no pino 8

    Se vc3 > 1m3 => Piscar LED verde,  que está no pino 2

    

    Atenção: 

    - Mantenha o programa organizado com formatação (endentação).

    - Comente as principais partes do programa para que haja um entendimento claro.

    Use um dos 3 LEDS (Vermelho - pino 22, Amarelo - pino 24 e Verde - pino 26) no arduino MEGA

    ou 3 LEDS (Vermelho - pino 13, Amarelo - pino 8 e Verde - pino 2)no UNO No Tinkercad

    

    Salve o Sketch como Exercicio-2-Seu_Nome.ino no SIGA

*/

//entrada dos valores da variavel

float raio_cilindro_1 =0.42;
float raio_cilindro_2 =0.33;
float raio_cilindro_3 = 1;

float altura_1 = 0.5;
float altura_2 = 1;
float altura_3 = 0.6;

float pi = 3.14;

int tempo_1sc = 1000;

//Entrada dos leds
int ledVermelho = 38;
int ledAmarelo = 40;
int ledVerde = 42;

//Acender se for maior que 1
int acende_1 = false;
int acende_2 = false;
int acende_3 = false;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);

  
  float calculoParaOCilindro_1 = pi * raio_cilindro_1 * altura_1;
  float calculoParaOCilindro_2 = pi * raio_cilindro_2 * altura_2;
  float calculoParaOCilindro_3 = pi * raio_cilindro_3 * altura_3;

  Serial.print("O cilindro 1 tem o volume de :");
  Serial.println(calculoParaOCilindro_1);

  Serial.print("O cilindro 2 tem o volume de :");
  Serial.println(calculoParaOCilindro_2);

  Serial.print("O cilindro 3 tem o volume de :");
  Serial.println(calculoParaOCilindro_3);

  if(calculoParaOCilindro_1 >= 1){
    Serial.println("O volume do cilindro 1 passou de 1 m3"); 
    acende_1 = true;
  }
  if (calculoParaOCilindro_2 >= 1){
    Serial.println("O volume do cilindro 2 passou de 1 m3"); 
    acende_2 = true;
  }
  if (calculoParaOCilindro_3 >= 1){
    Serial.println("O volume do cilindro 3 passou de 1 m3"); 
    acende_3 = true;
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (acende_1 == true){
    digitalWrite(ledVermelho,HIGH);
    Serial.println("acendeu o Vermelho");
    delay(tempo_1sc);
    digitalWrite(ledVermelho,LOW);
  }
  if (acende_2 == true){
    digitalWrite(ledAmarelo,HIGH);
    Serial.println("acendeu o Amarelo");
    delay(tempo_1sc);
    digitalWrite(ledAmarelo,LOW);
  }
  if (acende_3 == true){
   digitalWrite(ledVerde,HIGH);
   Serial.println("acendeu o Verde");
   delay(tempo_1sc);
   digitalWrite(ledVerde,LOW);
  }

}
