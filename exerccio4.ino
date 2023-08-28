// Aula de 28/08/2023
// Tarefa-01
/* Lista de atividades:
a) Criar um sketch que faça TODOS os LEDs, que estão conectados no shield do Arduino Mega
piscarem continuamente a cada 1 segundo. 
A sequência de piscagem é esta:
1º piscam todos os LEDs vermelhos
2º piscam todos os LEDs verdes
3º piscam todos os LEDs amarelos
4º Os LEDs vermelhos voltam a piscar e a sequência toda se repete sucessivamente.
**Atenção:
- Use variáveis para a definição dos nomes dos LEDs e do tempo de piscada.
- Verifique no shield o nº dos pinos de cada LED.
- Salvar o arquivo como "Tarefa-01A".

b) Criar uma variável que incremente seu valor em cada passagem do loop e escreva esse 
valor no monitor serial do Arduino.
Atenção, salvar o arquivo como "Tarefa-01B".

Use a estrutura base abaixo para iniciar a programação.
*/
int ledVer1 = 38;
int ledVer2 = 44;
int ledVer3 = 50;

int ledAmarelo1 = 40;
int ledAmarelo2 = 46;

int ledVerd1 = 42;
int ledVerd2 = 48;
int ledVerd3 = 52;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledVer1, OUTPUT);
  pinMode(ledVer2, OUTPUT);
  pinMode(ledVer3, OUTPUT);

  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);

  pinMode(ledVerd1, OUTPUT);
  pinMode(ledVerd2, OUTPUT);
  pinMode(ledVerd3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVer1, HIGH);
  digitalWrite(ledVer2, HIGH);
  digitalWrite(ledVer3, HIGH);
  delay(1000);
  digitalWrite(ledVer1, LOW);
  digitalWrite(ledVer2, LOW);
  digitalWrite(ledVer3, LOW);
  delay(1000);
  
  digitalWrite(ledAmarelo1, HIGH);
  digitalWrite(ledAmarelo2, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  delay(1000);

  digitalWrite(ledVerd1, HIGH);
  digitalWrite(ledVerd2, HIGH);
  digitalWrite(ledVerd3, HIGH);
  delay(1000);
  digitalWrite(ledVerd1, LOW);
  digitalWrite(ledVerd2, LOW);
  digitalWrite(ledVerd3, LOW);
  delay(1000);
}
