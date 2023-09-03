// Aula de 30/08/2023
// Exercicio-1
/* Lista de atividades:
a) Criar um sketch que faça TODOS os LEDs, que estão conectados no Arduino Uno,
de 13 à 6 (identifique os pinos), pisquem continuamente a cada 0,25 segundo. 
A sequência de piscagem é esta:
L13, L12, L11, L10, L9, L8, L7, L6
**Atenção:
- Use variáveis para a definição dos nomes dos LEDs e do tempo de piscada.
- Verifique no shield o nº dos pinos de cada LED.
- Salvar o arquivo como "Exercicio-1A".

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
- Salvar o arquivo como "Exercicio-1B".

Use a estrutura base abaixo para iniciar a programação.
*/
int tempoDelay = 125;
int i = 13;
int verm = 0;
int amar = 0;
int verd = 0;
void setup(){
  Serial.begin(9600);
  for (int a = i; a>=6 ; a--){
    pinMode(a, OUTPUT);
  }
    
}  

void loop(){
  for (i; i>=6 ; i--){
    digitalWrite(i,HIGH);
    delay(tempoDelay);
  	if (i == 13 || i == 10 || i == 7){
      verm += 1;
      Serial.println("---------------------");
      Serial.print("O vermelho piscou =");
      Serial.println(verm);
      Serial.print("O Amarelo piscou =");
      Serial.println(amar);
      Serial.print("O verde piscou =");
      Serial.println(verd);
      Serial.print("Os leds piscaram =");
      Serial.println(verm+amar+verd);
    }else if (i == 12 || i == 9) {
      amar += 1;
      Serial.println("---------------------");
      Serial.print("O vermelho piscou =");
      Serial.println(verm);
      Serial.print("O Amarelo piscou =");
      Serial.println(amar);
      Serial.print("O verde piscou =");
      Serial.println(verd);
      Serial.print("Os leds piscaram =");
      Serial.println(verm+amar+verd);
    }else {
      verd += 1;
      Serial.println("---------------------");
      Serial.print("O vermelho piscou =");
      Serial.println(verm);
      Serial.print("O Amarelo piscou =");
      Serial.println(amar);
      Serial.print("O verde piscou =");
      Serial.println(verd);
      Serial.print("Os leds piscaram =");
      Serial.println(verm+amar+verd);
    }
    digitalWrite(i,LOW);
  	delay(tempoDelay);
    
  }
  i=13;
  } 	
