/* Questão 2 (4 pontos): Prova 1 de Lógica de Programação - LGP18802
  27.09.2023 - prof. Alexandre Nuernberg
      
   Atenção: 
      - Defina variáveis para armazenamento dos pinos dos LEDS e dos tempos. (se necessário)
      - Mantenha o programa organizado com formatação (endentação).
      - Comente as principais partes do programa para que haja um entendimento claro.
      - Salve frequentemente o sketch no PENDRIVE para evitar perder o trabalho
      - Salve o sketch com nome: Questao02_Prova01_Seu_Nome_Completo (não use espaços nem acentos)
      - Após testar e terminar envie o arquivo pelo siga no final da prova.
  
a) (1,5 ponto) Sabendo-se que um dia tem 24hs, calcule cumulativamente o número de horas de cada
dia durante o período de 1 mês. E mostre para cada dia do mês quantas horas foram 
transcorridas, completando a tabela como mostra o exemplo baixo:
Tabela de Exemplo saída do monitor serial:

Número de horas por dia:
N. Horas 1 dia x 24hs = 24hs
N. Horas 2 dias x 24hs = 48hs
.
.
.
N. Horas 30 dias x 24hs = 720hs

**Atenção! Utilize uma estrutura de repetição para a realização do cálculo e imprima a 
tabela com título no monitor serial.
  
b) (1,5 ponto)  Para cada dia do mês que tenha mais de 300hs acumuladas desde o primeiro dia, ajuste 
a tabela criada acima, para aparecer no monitor serial conforme o exemplo abaixo:
Número de horas por dia:
N. Horas 1 dia x 24hs = 24hs - Menos de 300hs
N. Horas 2 dias x 24hs = 48hs - Menos de 300hs
.
.
.
N. Horas 30 dias x 24hs = 720hs - Mais de 300hs

ou seja, deve mostrar "- Menos de 300hs" (se tiver menos de 300hs) e deve mostrar "- Mais de 300hs" se tiver mais de 300hs. 
Se as horas acumuladas forem exatamente 300hs, não precisa aparecer mensagem.

c) (1 ponto)  Faça uma estrutura que conte e informe no monitor serial quantos dias do mês tiveram 
mais de 300hs acumuladas e imprima esse valor no final da tabela acima.
*/

//iniciação das variaveis
int contadorDeDias = 1;
int diaCompleto = 24;
int horasAcumuladas =0;
int maiorQue_300 = 0;
int menorQue_300 = 0;

void setup()
{
  //iniciação do serial
  Serial.begin(9600);
}

void loop()
{
  //Logica primaria para contar dias e escrever no serial
  if (contadorDeDias < 31){
    horasAcumuladas = contadorDeDias * diaCompleto;
    if (horasAcumuladas < 300){
      Serial.println("N. de horas de " + String(contadorDeDias) +" dias x " + String(diaCompleto) + "hs = " +String(horasAcumuladas) +" - Menos de 300hs");
      contadorDeDias = contadorDeDias + 1;
      menorQue_300 = menorQue_300 + 1;
    }else {
      Serial.println("N. de horas de " + String(contadorDeDias) +" dias x " + String(diaCompleto) + "hs = " +String(horasAcumuladas) +" - Mais de 300hs");
      contadorDeDias = contadorDeDias + 1;
      maiorQue_300 = maiorQue_300 + 1;
    }
  }
  //Logica secundaria para printar quais são maiores e menores e sair sem entrar no loop denovo
  if (contadorDeDias == 31){
    Serial.println("-------------------------------------------------------------");
    Serial.println("O numero total de dias menor de 300 foi = " +String(menorQue_300));
    Serial.println("O numero total de dias acima de 300 foi = " +String(maiorQue_300));
    contadorDeDias = contadorDeDias +1;
  }
  
}
