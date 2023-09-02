// Aula de 30/08/2023
// Exercicio-2
/* Lista de atividades:

a) Elabore um programa para o cálculo e impressão no monitor serial do volume
de uma esfera de raio R. 
A formula do cálculo é: 𝑉 = (4𝜋𝑅^3)/3 (raio ao cubo!)
Considere pi = 3.14
Mande imprimir na serial o valor dos 3 volumes para raios de 1m ; 2.5m e 5m.
Cuide com o uso de variáveis tipo inteira ou real (ponto flutuante).

**Atenção:
- Use variáveis para a definição dos nomes dos LEDs e do tempo de piscada.
- Verifique no shield o nº dos pinos de cada LED.
- Salvar o arquivo como "Exercicio-2A".

b) Agora que vc tem o valor dos 3 volumes calculados, crie um estrutura condicional que faça todos os leds vermelhos
piscarem se a V1 for maior que 10, faça todos os ledes amarelos piscarem se o V2 for maior que 50 e faça todos os leds 
verdes piscarem se o V3 for maior que 300
- Salvar o arquivo como "Exercicio-2B".

Use a estrutura base abaixo para iniciar a programação.
*/
int a = 1;
float b = 2.5;
int c = 5;

float pi = 3.14159265359;

int ledVermelho1 = 13;
int ledVermelho2 = 10;
int ledVermelho3 = 7;

int ledAmarelo1 = 12;
int ledAmarelo2 = 9;

int ledVerde1 = 11;
int ledVerde2 = 8;
int ledVerde3 = 6;

int tempoEspera = 150;


float calculoVolume1 = (((4*pi)*(pow(a,3)))/3);
float calculoVolume2 = (((4*pi)*(pow(b,3)))/3);
float calculoVolume3 = (((4*pi)*(pow(c,3)))/3);  	

void setup(){
	Serial.begin(9600);
	pinMode(ledVermelho1,OUTPUT);
  	pinMode(ledVermelho2,OUTPUT);
  	pinMode(ledVermelho3,OUTPUT);
  
  	pinMode(ledAmarelo1,OUTPUT);
  	pinMode(ledAmarelo2,OUTPUT);
  
  	pinMode(ledVerde1,OUTPUT);
  	pinMode(ledVerde2,OUTPUT);
  	pinMode(ledVerde3,OUTPUT);

}  

void loop(){
    Serial.println("--------");
    Serial.print("o volume do raio de 1m :");
    Serial.println(calculoVolume1);    
    Serial.print("o volume do raio de 2.5m :");
    Serial.println(calculoVolume2);
    Serial.print("o volume do raio de 5m :");
    Serial.println(calculoVolume3);

  if ( calculoVolume1 > 10 ){
  		digitalWrite(ledVermelho1, HIGH);
    	digitalWrite(ledVermelho2, HIGH);
    	digitalWrite(ledVermelho3, HIGH);
    	delay(tempoEspera);
    	digitalWrite(ledVermelho1, LOW);
    	digitalWrite(ledVermelho2, LOW);
    	digitalWrite(ledVermelho3, LOW);
    	delay(tempoEspera);
      Serial.println("--------");
      Serial.println("O led vermelho ligou pois o volume é maior que 10");

  }if (calculoVolume2 > 50){
   		digitalWrite(ledAmarelo1, HIGH);
    	digitalWrite(ledAmarelo2, HIGH);
    	delay(tempoEspera);
     	digitalWrite(ledAmarelo1, LOW);
    	digitalWrite(ledAmarelo2, LOW);
    	delay(tempoEspera);
      Serial.println("--------");
      Serial.println("O led amarelo ligou pois o volume é maior que 50");

  }if (calculoVolume3 > 300){
   		digitalWrite(ledVerde1, HIGH);
    	digitalWrite(ledVerde2, HIGH);
    	digitalWrite(ledVerde3, HIGH);
    	delay(tempoEspera);
    	digitalWrite(ledVerde1, LOW);
    	digitalWrite(ledVerde2, LOW);
    	digitalWrite(ledVerde3, LOW);
		  delay(tempoEspera);
      Serial.println("--------");
      Serial.println("O led verde ligou pois o volume é maior que 300");  
  }
}
