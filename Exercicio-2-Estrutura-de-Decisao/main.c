#include <stdio.h>

int main(void) {

float valor;

  printf("\n Digite um valor: ");
  scanf ("%f", &valor);

  if (valor == 0)
    printf ("\n Valor 0 e neutro");
  else if (valor > 0)
    printf ("\n O valor %.f e positivo", valor);
  else
    printf ("\n O valor %.f e negativo", valor);
 
  return 0;
}