// Aula de 28/08/2023
// Tarefa-02
/* Lista de atividades:
a) Criar um sketch que faça TODOS os LEDs, que estão conectados no shield do Arduino Mega
piscarem continuamente a cada 0,25 segundo. 
A sequência de piscagem é esta:
L8, L7, L6, L5, L4, L3, L2, L1
**Atenção:
- Use variáveis para a definição dos nomes dos LEDs e do tempo de piscada.
- Verifique no shield o nº dos pinos de cada LED.
- Salvar o arquivo como "Tarefa-02A".

b) Agora crie um flag (variável) que conte o nº de vezes que cada cor pisca. 
Dê o nome do flag o nome da cor ex:
vermelho
verde
amarelo
No final de cada sequência completa de piscada (depois de todos os 8 LEds terem piscado), 
Informe no monitor serial o valor contagem da quantidade de vezes que os LEDs de cada cor piscaram.
ex:
Depois da 1ª contagem deve mostrar na serial algo como:
Numero de piscadas:
LEDs vermelhos: 3
LEDs verdes: 3
LEDs amarelos: 2
Total de LEDs que piscaram: 8
- Salvar o arquivo como "Tarefa-02B".

Use a estrutura base abaixo para iniciar a programação.
*/
int l8 = 38;
int l7 = 40;
int l6 = 42;
int l5 = 44;
int l4 = 46;
int l3 = 48;
int l2 = 50;
int l1 = 52;

int temporizador = 250;

int flagVermelho = 0;
int flagVerde = 0;
int flagAmarelo = 0;
int flagTotal= 0;

void setup() {
  pinMode(l8,OUTPUT);
  pinMode(l7,OUTPUT);
  pinMode(l6,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l1,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(l8,HIGH);
  delay(temporizador);
  digitalWrite(l8,LOW);
  delay(temporizador);
  flagVermelho += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l7,HIGH);
  delay(temporizador);
  digitalWrite(l7,LOW);
  delay(temporizador);
  flagAmarelo += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l6,HIGH);
  delay(temporizador);
  digitalWrite(l6,LOW);
  delay(temporizador);
  flagVerde += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l5,HIGH);
  delay(temporizador);
  digitalWrite(l5,LOW);
  delay(temporizador);
  flagVermelho += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l4,HIGH);
  delay(temporizador);
  digitalWrite(l4,LOW);
  delay(temporizador);
  flagAmarelo += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l3,HIGH);
  delay(temporizador);
  digitalWrite(l3,LOW);
  delay(temporizador);
  flagVerde += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");


  digitalWrite(l2,HIGH);
  delay(temporizador);
  digitalWrite(l2,LOW);
  delay(temporizador);
  flagVermelho += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  digitalWrite(l1,HIGH);
  delay(temporizador);
  digitalWrite(l1,LOW);
  delay(temporizador);
  flagVerde += 1;
  flagTotal += 1;
  Serial.print("O led Vermelho piscou:");
  Serial.println(flagVermelho);
  Serial.print("O led Amarelo piscou:");
  Serial.println(flagAmarelo);
  Serial.print("O led Verde piscou:");
  Serial.println(flagVerde);
  Serial.print("Os leds piscaram:");
  Serial.println(flagTotal);
  Serial.println("----------------------------------------------------------------------------------");

  
}
