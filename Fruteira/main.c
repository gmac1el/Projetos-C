#include <stdio.h>

//Uma fruteira está vendendo frutas com a seguinte tabela de preços:
//                      Até 5 Kg           Acima de 5 Kg
//Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
//Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg
//Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.

int main(void) {

float morango, maca, totalfruta, pagamento;

  printf ("\n Digite a quantidade de morango: ");
  scanf ("%f", &morango);

   printf ("\n Digite a quantidade de maçã: ");
  scanf ("%f", &maca);

  totalfruta = (morango + maca);

  if (totalfruta <= 5 ) {
    pagamento = (2.50 * morango) + (1.80 * maca);
    printf ("\n Valor a pagar = %.2f", pagamento);
    }
  else {
    pagamento = (2.20 * morango) + (1.50 * maca);
    if (pagamento > 25 || totalfruta > 8) { 
   pagamento = (pagamento - (pagamento*0.10));
  printf ("\n Valor a pagar = %.2f", pagamento);
      }
  else
   printf ("\n Valor a pagar = %.2f", pagamento);
      } 
  return 0;
}