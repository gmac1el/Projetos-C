#include <stdio.h>

int main(void) {

float numero_1, numero_2;

  printf ("\n Digite o primeiro numero: ");
  scanf ("%f", &numero_1);

  printf ("\n Digite o segundo numero: ");
  scanf ("%f", &numero_2);

  if (numero_1 > numero_2)
    printf ("\n O primeiro numero e maior que o segundo numero: %.f", numero_1);
  else if (numero_2 > numero_1)
     printf ("\n O segundo numero e maior que o primeiro numero: %.f", numero_2);
    
  
  return 0;
}