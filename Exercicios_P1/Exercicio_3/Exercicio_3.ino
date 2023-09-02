// Aula de 30/08/2023
// Exercicio-3
/* Lista de atividades:

a) Escreva em C, as seguintes expressões matemáticas. Teste com diferentes valores para as
variáveis e mande imprimir o resultado na serial: 
a) (𝐴 + 𝐵) × 𝐶
b) 𝑇𝑂𝑇𝐴𝐿/𝑁  ?????????????? q isso
c) 𝐴 − 𝐵(𝐶 + 𝐷^2)/𝐸
e) 𝑎 × 𝑏𝑐

*/
float a = 2.69;
float b = 2.5;
float c = 3.5;
float d = 9.5;
float e = 1.5;

float calculo1 = ((a + b) * c);
float calculo2 = (((a - b)*(c + (pow(d,2)))/e));
float calculo3 = (a*(b*c));

void setup(){
    Serial.begin(9600);
    Serial.println("---------");
    Serial.print("o calculo de (a + b) * c) e :");
    Serial.println(calculo1);
    Serial.print("o calculo de (((a - b)*(c + (pow(d,2)))/e)) e :");
    Serial.println(calculo2);
    Serial.print("o calculo de (a*(b*c)) e :");
    Serial.println(calculo3);
}  

void loop(){

}
