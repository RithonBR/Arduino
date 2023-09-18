/* Exercicío preparatório para a prova

 Prova 1 de Lógica de Programação - LGP18802 de 2023/01

24/04/2023 prof. Alexandre Nuernberg

  

  Questão 1: (2 pontos)

    a) A sinaleira possui 3 LEDS (Vermelho - pino 22, Amarelo - pino 24 e

    Verde - pino 26).

    Faça um programa que faça com que os LEDS da sinaleira pisquem continuamente

    e na seguinte ordem:

    1º LED Vermelho,  fica aceso sozinho por 5 segundos

       (Sinal fechado para o trânsito).

    2º LED Laranja,   fica aceso sozinho por 3 segundos

       (Alerta que a sinal vai abrir).

    3º LED verde,   fica aceso sozinho por 5 segundos

       (Sinal aberto para o trânsito);

    Depois disso o ciclo de repete e o sinal volta a ficar vermelho e assim 

    por diante.

    

    Atenção: 

    - Defina variáveis para armazenamento dos pinos dos LEDS e dos tempos.

    - Mantenha o programa organizado com formatação (endentação).

    - Comente as principais partes do programa para que haja um entendimento claro.

    

    b) Nesse mesmo programa (NÃO SALVE OU COPIE PARA OUTRO!)

  Mostre no monitor serial, quando Cada LED está acesso usando mensagens como:

    - Quando o LED Vermelho está aceso -> escrever na serial:  "LED Vermelho aceso."

    - Quando o LED Laranja está aceso -> escrever na serial:  "LED Laranja aceso."

    - Quando o LED Verde está aceso -> escrever na serial:  "LED Verde aceso."

    

    Atenção:

    Salve o Sketch como Exercicio-1-Seu_Nome.ino no SIGA

*/
int ledVermelho = 38;
int ledAmarelo = 40;
int ledVerde = 42;

int tempo_5sc = 5000;
int tempo_3sc = 3000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledVermelho, HIGH);
  Serial.println("LED Vermelho aceso.");
  delay(tempo_5sc);
  digitalWrite(ledVermelho, LOW);

  digitalWrite(ledAmarelo, HIGH);
  Serial.println("LED Amarelo aceso.");
  delay(tempo_3sc);
  digitalWrite(ledAmarelo, LOW);

  digitalWrite(ledVerde, HIGH);
  Serial.println("LED Verde aceso.");
  delay(tempo_5sc);
  digitalWrite(ledVerde, LOW);


}
