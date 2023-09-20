/* Exercicío preparatório para a prova

Prova 1 de Lógica de Programação - LGP18802 de 2023/01

24/04/2023 prof. Alexandre Nuernberg

  

  Questão 3: (4 pontos)

    a) Imprima no monitor serial a tabuada de 6 (de 1 à 10), informando que é 

    a Tabuada de 6 e mostrando os resultados em linha assim:

    Tabuada de 6:

    6 * 1 = 6

    .

    .

    .

    6 * 10 = 60

    

    *O cálculo da tabuada deve ser realizado à partir de uma estrutura lógica de repetição

    a escolha do aluno e deve aparecer apenas uma vez, não se repetindo no monitor serial.

    

    Atenção: 

    - Mantenha o programa organizado com formatação (endentação).

    - Comente as principais partes do programa para que haja um entendimento claro.

    

    b) Nesse mesmo programa (NÃO SALVE OU COPIE PARA OUTRO!)

    Para cada valor (X) calculado da tabuada de 6 , verifique se o mesmo é maior ou igual a 30, 

    Se não for, informe no monitor serial, ao lado de cada valor que X < 30 (informando o 

    valor de X).

    E caso seja divida X por 3 e imprima o valor de X e seu valor dividido por 3 no

    monitor serial.





*** ATENÇÃO ***

*** USE ESTRUTURA DE REPETIÇÃO IF! ***



Salve o Sketch como Exercicio-3-Seu_Nome.ino no SIGA

*/
int contador = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  for (contador;contador <= 10;contador++){
    int calculo = 6 * contador;
    Serial.print("6 * ");
    Serial.print(contador);
    Serial.print(" = ");
    Serial.print(calculo);
    if (calculo < 30){
      Serial.println(" // é menor que 30");
    }else{
      Serial.println();
    }
  }
 }
