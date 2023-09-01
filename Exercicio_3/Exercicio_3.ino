// Aula de 21/08/2023
// Exercicio-03
/* Lista de atividades:
a) Faça um programa que calcule o Comprimento de uma circunferência usando a fórmula:
C = 2πr. Armazene cada variável com os nomes "C" e "R". Use variáveis inteiras.
Efetue os cálculos, para o raio = a 2m, 2,5m e 3m, apresentando o valor da circunferência
para cada um desses raios. Armazene os resultados dos cálculos em C1, C2 e C3 e 
mostre no monitor serial.
Atenção, salvar o arquivo como "Exercicio-03A".

b)Repita o item a), mas usando variáveis flutuantes (float)
Atenção, salvar o arquivo como "Exercicio-03B".

c) Agora adapte o sketch b) e crie uma estrutura condicional que faça com que se o 
Comprimento da circunferência for maior que 15m, acenda o LED vermelho.
Atenção, salvar o arquivo como "Exercicio-03C".

Use a estrutura base abaixo para iniciar a programação.
*/
float raio = 2;
float calc = 0;

float pi = 3.142857;
int ledVermelho = 38;
int tempoEspera = 100;

void setup() {

  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);

}

void loop() {
  calc = 2*pi*raio;
  Serial.println(calc);
  if (calc >= 15){
    digitalWrite(ledVermelho,HIGH);
    delay(tempoEspera);
    digitalWrite(ledVermelho,LOW);
    delay(tempoEspera);
  }
  raio += 0.5;
  if (raio > 3){
    raio = 2;
  }

}
