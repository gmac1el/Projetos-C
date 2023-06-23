#include <stdio.h>

int main(void) {

 float notas [5];
  int i;

  //entrada
 for (i = 1; i <=5; i++)
 {
    printf ("\nDigite 5 numeros inteiros: ");
    scanf ("%f", &notas[i]);
  }
  //saida
 for (i = 1; i <=5; i++)
  {
    printf ("\n Valor da nota %d: %.f \n", i, notas[i]);
  }
  
  return 0;
}


