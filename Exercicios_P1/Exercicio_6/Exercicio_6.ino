/* Um LED RGB é um led 3 em um, pois ele possui 3 leds internos, um vermelho (Red),
um verde (Green) e um azul (Blue), daí o nome RGB, Red Green Blue.
Esse led está ligado no Arduino da seguinte maneira:

Pino 13 - led vermelho
Pino 12 - Led Azul
Pino 11 - Led verde

A) Crie um programa que faça esse led piscar na seguinte ordem:
- vermelho (1s)
- verde (1s)
- azul (1s)

B) Depois disso faça com que ele escreva no monitor serial, o nome da cor 
que está piscando no momento.

C) Uma das grandes vantagens de se utilizar um led RGB é a sua capacidade 
de combinação de cores e assim criar múltiplas cores.
Sabendo-se que se eu misturar:
vermelho + verde + azul, terei a cor Branco
vermelho + verde = Amarelo
vermelho + azul = Magenta (Rosa)
Verde + Azul = Ciano (Azul Claro)

Aumente o programa de forma que qdo ele terminar de piscar azul,
Ele misture as cores e pisque as cores acima 1 segundo por cor, depois voltando 
ao vermelho.

Sequência de piscagem fica assim:
- Vermelho
- Verde
- Azul
- Branco
- Magenta
- Amarelo
- Ciano
*Cada uma pisca por 1s e volta ao vermelho

D) Depois disso faça com que ele escreva no monitor serial, o nome de cada cor 
que está piscando no momento.
*/

// Definição de variáveis
int ledVermelho = 13;
int ledAzul = 12;
int ledVerde = 11;

int tempoEspera = 500; 

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledAzul,HIGH);
  delay(tempoEspera);
  digitalWrite(ledAzul,LOW);
  Serial.println("Azul");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledVerde,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVerde,LOW);
  Serial.println("Verde");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledVermelho,HIGH);
  digitalWrite(ledAzul,HIGH);
  digitalWrite(ledVerde,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  digitalWrite(ledAzul,LOW);
  digitalWrite(ledVerde,LOW);
  Serial.println("BRANCO");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledVermelho,HIGH);
  digitalWrite(ledAzul,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  digitalWrite(ledAzul,LOW);
  Serial.println("MAGENTA");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledVermelho,HIGH);
  digitalWrite(ledVerde,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  digitalWrite(ledVerde,LOW);
  Serial.println("AMARELO");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");

  digitalWrite(ledAzul,HIGH);
  digitalWrite(ledVerde,HIGH);
  delay(tempoEspera);
  digitalWrite(ledAzul,LOW);
  digitalWrite(ledVerde,LOW);
  Serial.println("CIANO");

  digitalWrite(ledVermelho,HIGH);
  delay(tempoEspera);
  digitalWrite(ledVermelho,LOW);
  Serial.println("Vermelho");


}