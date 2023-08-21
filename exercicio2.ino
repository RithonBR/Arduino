// Aula de 21/08/2023
// Exercicio-02
/* Lista de atividades:
a) Criar um sketch que faça o LED amarelo, que está conectado ao pino 8 do Arduino
UNO piscar continuamente, iniciando a cada 0,1 segundo o tempo de piscar e incrementando o tempo de 
piscada em 100ms por cada passada no loop.
use variáveis "pinoLED" e "tempoEspera" para armazenar os valores do pino e do tempo.
Atenção, salvar o arquivo como "Exercicio-02A".

b)Repita o item a), mas faça com que o valor do tempo incrementado seja mostrado no monitor
serial do Arduino a cada passada de loop
Atenção, salvar o arquivo como "Exercicio-02B".

c) Agora adapte o sketch b) e crie uma estrutura condicional que faça com que se o tempo de piscada 
chegar a 2 segundos, este tempo volte a ser 100ms.
Atenção, salvar o arquivo como "Exercicio-02C".

Use a estrutura base abaixo para iniciar a programação.
*/


int ledAmarelo = 40;
int tempoEspera = 100;


void setup() {

  Serial.begin(9600);
  pinMode(ledAmarelo, OUTPUT);

}

void loop() {


  digitalWrite(ledAmarelo,HIGH);
  delay(tempoEspera);
  digitalWrite(ledAmarelo,LOW);
  delay(tempoEspera);
  tempoEspera += 100;
  Serial.println(tempoEspera);
  if (tempoEspera == 2000){
    tempoEspera = 100;
  }


}
