#include <stdio.h>

int main(void) {
  int numero;
printf ("Insira o número:");
scanf ("%d", &numero);

  if (numero > 0) {
printf ("P (positivo)");    
  }
  else if (numero < 0) {
printf ("N (negativo)");
  }
  else {
   printf ("Número é 0"); 
  }
  
  return 0;
}