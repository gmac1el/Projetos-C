#include <stdio.h>

int main(void) {

  float metro, centimetro;

  printf ("\nInsira medida em metros:");
  scanf ("%f", &metro);

  centimetro = metro * 100;

  printf ("\nSua medida em centimetros: %.2f\n", centimetro);

  
  

  
 
  return 0;
}