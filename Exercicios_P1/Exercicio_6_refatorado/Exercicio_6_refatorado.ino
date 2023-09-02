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
vermelho + azul = Magenta (Rosa)
vermelho + verde = Amarelo
Verde + Azul = Ciano (Azul Claro)

Aumente o programa de forma que qdo ele terminar de piscar azul,
Ele misture as cores e pisque as cores acima 1 segundo por cor, depois voltando 
ao vermelho.

Sequência de piscagem fica assim:
- Vermelho (foi)
- Verde (foi)
- Azul (foi)
- Branco (foi)
- Magenta (foi)
- Amarelo
- Ciano
*Cada uma pisca por 1s e volta ao vermelho

D) Depois disso faça com que ele escreva no monitor serial, o nome de cada cor 
que está piscando no momento.
*/

// Definição de variáveis

int tempoEspera = 500; 
int i = 13;

void setup()
{
  pinMode(i, OUTPUT);
  pinMode(i-1,OUTPUT);
  pinMode(i-2,OUTPUT);
  Serial.begin(9600);
}

// vermelho, verde e azul
void loop() {
    while (i>=11){
      digitalWrite(i,HIGH);
      delay(tempoEspera);
      digitalWrite(i,LOW);
      delay(tempoEspera);
      if (i != 13 || i == 13){
        digitalWrite(13,HIGH);
        delay(tempoEspera);
        digitalWrite(13,LOW);
        delay(tempoEspera);
      }      
      i -= 1;
      }
    i = 13;

    // branco 

    if (i==13){
      for (int a = 13;a>=11;a--){
          digitalWrite(a,HIGH);
          Serial.print(a);
          }
      delay(tempoEspera);
      for (int a = 13;a>=11;a--){
          digitalWrite(a,LOW);
          Serial.print(a);
          }
      delay(tempoEspera);
      digitalWrite(13,HIGH);
      delay(tempoEspera);
      digitalWrite(13,LOW);
      delay(tempoEspera);    
    i = 13;

    //magenta

    if (i==13){
      for (int a = 13;a>=12;a--){
          digitalWrite(a,HIGH);
          Serial.print(a);
          }
      delay(tempoEspera);
      for (int a = 13;a>=12;a--){
          digitalWrite(a,LOW);
          Serial.print(a);
          }
      delay(tempoEspera);
      digitalWrite(13,HIGH);
      delay(tempoEspera);
      digitalWrite(13,LOW);
      delay(tempoEspera);    
    i = 13;

    // amarelo
    
    if (i==13){
      for (int a = 13;a>=11;a -= 2 ){
          digitalWrite(a,HIGH);
          Serial.print(a);
          }
      delay(tempoEspera);
      for (int a = 13;a>=11;a -= 2){
          digitalWrite(a,LOW);
          Serial.print(a);
          }
      delay(tempoEspera);
      digitalWrite(13,HIGH);
      delay(tempoEspera);
      digitalWrite(13,LOW);
      delay(tempoEspera);    
    i = 12;

    }

    // ciano

    if (i==12){
      for (int a = 12;a>=11;a -= 1 ){
          digitalWrite(a,HIGH);
          Serial.print(a);
          }
      delay(tempoEspera);
      for (int a = 12;a>=11;a -= 1){
          digitalWrite(a,LOW);
          Serial.print(a);
          }
      delay(tempoEspera);
      digitalWrite(13,HIGH);
      delay(tempoEspera);
      digitalWrite(13,LOW);
      delay(tempoEspera);    
    i = 13;

    }
}
    }
}