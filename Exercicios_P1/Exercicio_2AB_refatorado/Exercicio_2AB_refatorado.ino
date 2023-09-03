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

float numeros[] = {1,2.5,5};
float pi = 3.14159265359;
int tempoEspera = 2000;
int k = 2;
int p = 13;

void setup(){
	Serial.begin(9600);
	for (int i = 13;i>=6;i--){
      pinMode(i,OUTPUT);
  }  
}  

void loop(){
  	for (k;k>=0;k = k - 1){
      	float resultados [] = { (((4.0*pi)*(pow(numeros[k],3.0)))/3.0) } ;
		    Serial.println("----------");
        Serial.print("O Resultado com o raio de ");
        Serial.print(numeros[k]);
        Serial.print(": ");
        Serial.println(resultados[0]);        
        if (resultados[0]>=300){
              digitalWrite(p, HIGH);
              digitalWrite(p-3, HIGH);
              digitalWrite(p-6, HIGH);
              digitalWrite(p-1, HIGH);
              digitalWrite(p-4, HIGH);
              digitalWrite(p-2, HIGH);
              digitalWrite(p-5, HIGH);
              digitalWrite(p-7, HIGH);
              Serial.println("O led verde ligou pois o volume e maior que 300");
              Serial.println("O led amarelo ligou pois o volume e maior que 50");
              Serial.println("O led vermelho ligou pois o volume e maior que 10");
              delay(tempoEspera);
              digitalWrite(p, LOW);
              digitalWrite(p-3, LOW);
              digitalWrite(p-6, LOW);
              digitalWrite(p-1, LOW);
              digitalWrite(p-4, LOW);
              digitalWrite(p-2, LOW);
              digitalWrite(p-5, LOW);
              digitalWrite(p-7, LOW);
              delay(tempoEspera);
            
        }else if (resultados[0]>=10 && resultados[0]>=50){
              digitalWrite(p, HIGH);
              digitalWrite(p-3, HIGH);
              digitalWrite(p-6, HIGH);
              digitalWrite(p-1, HIGH);
              digitalWrite(p-4, HIGH);
              Serial.println("O led amarelo ligou pois o volume e maior que 50");
              Serial.println("O led vermelho ligou pois o volume e maior que 10");
              delay(tempoEspera);
              digitalWrite(p, LOW);
              digitalWrite(p-3, LOW);
              digitalWrite(p-6, LOW);
              digitalWrite(p-1, LOW);
              digitalWrite(p-4, LOW);
              delay(tempoEspera);
        }else if (resultados[0]>=10) {
              digitalWrite(p, HIGH);
              digitalWrite(p-3, HIGH);
              digitalWrite(p-6, HIGH);
              Serial.println("O led vermelho ligou pois o volume e maior que 10");
              delay(tempoEspera);
              digitalWrite(p, LOW);
              digitalWrite(p-3, LOW);
              digitalWrite(p-6, LOW);

                      
        
        }else {
          Serial.println("O led nao ligou pois o volume e menor que 10");
          delay(tempoEspera);
        }
        }
        k = 2;
        p = 13;
    }
  
  
