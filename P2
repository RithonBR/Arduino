#include <LiquidCrystal.h> //biblio

//----------------------------------------------------------------------------------------

// LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // arduino uno
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // arduino 2560

//----------------------------------------------------------------------------------------

// const int ch01Pin = 8, ch02Pin = 7; // Pinos das chaves arduino uno
const int ch01Pin = 23, ch02Pin = 25; // Pinos das chaves arduino 2560

const int analogPin = A0; // Pino Analogico

String categoria = "";
int tempo = 1500;  // tempo de delay
float total = 0.0; // total vendas

//----------------------------------------------------------------------------------------
// Arrays que irei utilizar
String array_Produtos[] = {"Banana",
                           "Queijo Colonial",
                           "Laranja", "Feijao",
                           "Vinagre", "Abacate",
                           "Salame", "Batata",
                           "Melao",
                           "Amendoim",
                           "Vinho Colonial",
                           "Cebola"};

String array_Categorias[] = {"Frutas",
                             "Friambreria",
                             "Frutas",
                             "Leguminosas",
                             "Temperos",
                             "Frutas",
                             "Friambreria",
                             "Verduras",
                             "Frutas",
                             "Leguminosas",
                             "Bebidas",
                             "Verduras"};

int array_Quantidades_Vendas[] = {32,
                                  4,
                                  12,
                                  11,
                                  4,
                                  8,
                                  7,
                                  15,
                                  2,
                                  5,
                                  9,
                                  16};

String array_Unidades[] = {"Duzia",
                           "Kg",
                           "Kg",
                           "Kg",
                           "Garrafa",
                           "Unid",
                           "Kg",
                           "Kg",
                           "Kg",
                           "Kg",
                           "Garrafa",
                           "Kg"};

float array_Preco_Unitario[] = {7.00,
                                27.40,
                                5.99,
                                13.60,
                                15.35,
                                6.34,
                                45.15,
                                3.99,
                                8.45,
                                8.20,
                                12.50,
                                4.35};

float array_Preco_Total[12];

//----------------------------------------------------------------------------------------

void setup()
{

  // Inicializacao de pinos e lcd
  lcd.begin(16, 2);
  pinMode(analogPin, INPUT);
  pinMode(ch01Pin, INPUT);
  pinMode(ch02Pin, INPUT);

  for (int i = 0; i < 12; i++)
  {
    array_Preco_Total[i] = array_Quantidades_Vendas[i] * array_Preco_Unitario[i];
    total += array_Preco_Total[i];
  }
}
//----------------------------------------------------------------------------------------

void loop()
{

  // Colocar no display
  displayProdutos();
}

//----------------------------------------------------------------------------------------

void displayProdutos()
{

  // Menu de produtos disponiveis
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("PRODUTOS");
  lcd.setCursor(2, 1);
  lcd.print("DISPONIVEIS");
  delay(tempo);

  // Criacao de um sensor para ver os botoes e reset da categoria
  int sensorValue = 0;
  categoria = "";

  // for para seguir os arrays e printar na tela os produtos
  for (int i = 0; i < 12; i++)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(array_Produtos[i]);
    lcd.setCursor(0, 1);
    lcd.print("R$: ");
    lcd.print(array_Preco_Unitario[i]);
    delay(tempo);

    // Leitura do botao para troca rapida de menu
    sensorValue = analogRead(analogPin);

    // logica dos Sensores para escolha do menu
    if (sensorValue >= 0)
    {
      // ler as chaves caso ja saiba as combinacoes
      bool ch01Status = digitalRead(ch01Pin);
      bool ch02Status = digitalRead(ch02Pin);
      // SELECT - que leva para escolha de categorias com as chaves
      if (sensorValue <= 800 && sensorValue >= 600)
      {

        // loop infinito ate as chaves estarem certas
        while (categoria == "")
        {
          // ler as chaves dentro desse while para atualizar
          ch01Status = digitalRead(ch01Pin);
          ch02Status = digitalRead(ch02Pin);
          // esperar - 0 0 , loops de prints no shield
          if (ch01Status == false && ch02Status == false)
          {
            lcd.clear();
            lcd.setCursor(3, 0);
            lcd.print("Selecione");
            lcd.setCursor(2, 1);
            lcd.print("a categoria");
            delay(tempo);

            lcd.clear();
            lcd.setCursor(1, 0);
            lcd.print("Ch01:0 Ch02:1");
            lcd.setCursor(4, 1);
            lcd.print("Frutas");
            delay(tempo);

            lcd.clear();
            lcd.setCursor(1, 0);
            lcd.print("Ch01:1 Ch02:0");
            lcd.setCursor(3, 1);
            lcd.print("Verduras");
            delay(tempo);

            lcd.clear();
            lcd.setCursor(1, 0);
            lcd.print("Ch01:1 Ch02:1");
            lcd.setCursor(3, 1);
            lcd.print("Bebidas");
            delay(tempo);

            // Setar a categoria escolhida
          }
          else if (ch01Status == true && ch02Status == false)
          {
            categoria = "Verduras";
            // Setar a categoria escolhida
          }
          else if (ch01Status == false && ch02Status == true)
          {
            categoria = "Frutas";
            // Setar a categoria escolhida
          }
          else if (ch01Status == true && ch02Status == true)
          {
            categoria = "Bebidas";
          }
          // verificacao de set da categoria
          if (categoria != "")
          {

            // Imprimir a categoria
            lcd.clear();
            lcd.setCursor(1, 0);
            lcd.print("Itens da cat.");
            lcd.setCursor(3, 1);
            lcd.print(categoria);
            delay(tempo);

            // for para entrar na categoria e imprimir produtos e preco
            for (int i = 0; i < 12; i++)
            {
              if (array_Categorias[i] == categoria)
              {
                lcd.clear();
                lcd.setCursor(0, 0);
                lcd.print(array_Produtos[i]);
                lcd.setCursor(0, 1);
                lcd.print("R$ ");
                lcd.print(array_Preco_Unitario[i]);

                delay(tempo);
              }
            }
          }
          // break para saida rapida e reinicio do menu produtos
        }
        break;
        // LEFT - Levar para Preco de estoque (quantidade x preco)
      }
      else if (sensorValue < 600 && sensorValue >= 400)
      {
        displayPrecoTotal();
        delay(tempo);
        break;

        // DOWN - Levar para menor preco das mercadorias
      }
      else if (sensorValue < 400 && sensorValue >= 200)
      {
        exibirMenorPreco();
        delay(tempo);
        break;

        // UP - Levar para maior preco das mercadorias
      }
      else if (sensorValue < 200 && sensorValue >= 80)
      {
        exibirMaiorPreco();
        delay(tempo);
        break;

        // RIGHT - Levar para vendas de todas mercadorias somadas
      }
      else if (sensorValue < 80)
      {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Total vendido:");
        lcd.setCursor(0, 1);
        lcd.print("R$: ");
        lcd.print(total);
        delay(tempo);
        break;
      }
    }
  }
}

void exibirMaiorPreco()
{

  // variveis suporte da instancia
  float maiorPreco = 0;
  int indiceMaiorPreco = -1;

  // for que vai comparar os precos e uma variavel para segurar o preco mais alto
  for (int i = 0; i < 12; i++)
  {
    if (array_Preco_Unitario[i] > maiorPreco)
    {
      maiorPreco = array_Preco_Unitario[i];
      indiceMaiorPreco = i;
    }
  }

  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Produto com");
  lcd.setCursor(2, 1);
  lcd.print("Maior Preco");
  delay(tempo);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(array_Produtos[indiceMaiorPreco]);
  lcd.setCursor(0, 1);
  lcd.print("R$:");
  lcd.print(array_Preco_Unitario[indiceMaiorPreco]);
  delay(tempo);
}

void exibirMenorPreco()
{

  // variaveis suporte da instancia
  float menorPreco = array_Preco_Unitario[0];
  int indiceMenorPreco = 0;

  // for que vai comparar os precos e uma variavel para segurar o preco mais baixo
  for (int i = 1; i < 12; i++)
  {
    if (array_Preco_Unitario[i] < menorPreco)
    {
      menorPreco = array_Preco_Unitario[i];
      indiceMenorPreco = i;
    }
  }

  // Imprimir na tela o produto e preco
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Produto com");
  lcd.setCursor(2, 1);
  lcd.print("Menor Preco");
  delay(tempo);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(array_Produtos[indiceMenorPreco]);
  lcd.setCursor(0, 1);
  lcd.print("R$:");
  lcd.print(array_Preco_Unitario[indiceMenorPreco]);
  delay(tempo);
}

void displayPrecoTotal()
{
  // reset do sensor e leitura
  int sensorValue = 0;
  sensorValue = analogRead(analogPin);

  // Imprimir no shield
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Preco total por");
  lcd.setCursor(0, 1);
  lcd.print("Produto vendido:");
  delay(tempo);

  for (int i = 0; i < 12; i++)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(array_Produtos[i]);
    lcd.setCursor(0, 1);
    lcd.print("R$:");
    lcd.print(array_Preco_Total[i]);
    delay(tempo);
  }
}
