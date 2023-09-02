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
int vermelho = 0;
int amarelo = 0;
int verde = 0;


int tempoDelay = 125;

int ledVerm1 = 13;
int ledVerm2 = 10;
int ledVerm3 = 7;

int ledAmarelo1 = 12;
int ledAmarelo2 = 9;

int ledVerde1 = 11;
int ledVerde2 = 8;
int ledVerde3 = 6;

void setup(){
    pinMode(ledVerm1, OUTPUT);
  	pinMode(ledAmarelo1, OUTPUT);
  	pinMode(ledVerde1, OUTPUT);
    pinMode(ledVerm2, OUTPUT);
  	pinMode(ledAmarelo2, OUTPUT);
  	pinMode(ledVerde2, OUTPUT);
    pinMode(ledVerm3, OUTPUT);
    pinMode(ledVerde3, OUTPUT);
  
  	Serial.begin(9600);
}  

void loop(){
  
// Led Vermelho
	// Piscar o led
  	digitalWrite(ledVerm1,HIGH);
    delay(tempoDelay);
  	digitalWrite(ledVerm1,LOW);
  	delay(tempoDelay);
  
  	// autoincrementar o led
  	vermelho += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Amarelo
  // Piscar o led
	digitalWrite(ledAmarelo1,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledAmarelo1,LOW);
  	delay(tempoDelay);
  
  	// autoincrementar o led
  	amarelo += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Verde
  // Piscar o led
  	digitalWrite(ledVerde1,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledVerde1,LOW);
  	delay(tempoDelay);
    	
  // autoincrementar o led
  	verde += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Vermelho
  // Piscar o led
  	digitalWrite(ledVerm2,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledVerm2,LOW);
  	delay(tempoDelay);
  
  	// autoincrementar o led
  	vermelho += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Amarelo
  // Piscar o led
  	digitalWrite(ledAmarelo2,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledAmarelo2,LOW);
  	delay(tempoDelay);
  
   	// autoincrementar o led
  	amarelo += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);

// Led Verde
  // Piscar o led
  	digitalWrite(ledVerde2,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledVerde2,LOW);
  	delay(tempoDelay);
 
  // autoincrementar o led
  	verde += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Vermelho
  // Piscar o led
  	digitalWrite(ledVerm3,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledVerm3,LOW);
  	delay(tempoDelay);
  
  	// autoincrementar o led
  	vermelho += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
    Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  
// Led Verde
  // Piscar o led
  	digitalWrite(ledVerde3,HIGH);
  	delay(tempoDelay);
  	digitalWrite(ledVerde3,LOW);
  	delay(tempoDelay);
  
  	// autoincrementar o led
  	verde += 1;
  	
  	// imprimir no monitor
  	Serial.println("---------------------");
  	Serial.print("O vermelho piscou =");
  	Serial.println(vermelho);
  	Serial.print("O Amarelo piscou =");
  	Serial.println(amarelo);
  	Serial.print("O verde piscou =");
  	Serial.println(verde);
  	Serial.print("Os leds piscaram =");
  	Serial.println(vermelho+amarelo+verde);
  	
}
