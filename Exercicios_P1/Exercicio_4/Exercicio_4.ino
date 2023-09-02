// Aula de 30/08/2023
// Exercicio-4
/* Lista de atividades:

a) Implemente um sketch que faça a troca do conteúdo de duas variáveis, A e B.
Sendo A = 5 e B = 10, ele deve mostrar os valores de A e B no monitor serial, 
depois inverter os valores e mostrar novamente no monitor serial

*/
int a = 5;
int b = 10;
int c = 0;

void setup(){
  Serial.begin(9600);
  Serial.println("----------");
  Serial.print("o numero de a :");
  Serial.println(a);
  Serial.print("o numero de b :");
  Serial.println(b);
  
  c = a;
  a = b;
  b = c;

  Serial.println("----------");
  Serial.print("o novo numero de a :");
  Serial.println(a);
  Serial.print("o novo numero de b :");
  Serial.println(b);
  

}  

void loop(){
  
}
