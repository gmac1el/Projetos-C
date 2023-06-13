#include <stdio.h>

int main(void) {

  float celsius, fahrenheit;

  //Ler temperatura em Fahrenheit
  printf ("\n Insira a temperatura em Fahrenheit:");
  scanf ("%f", &fahrenheit);

  //Formula de Fahrenheit para Celsius
  celsius=(fahrenheit - 32)*5/9;
  
  //Resultado
  printf ("\nCelsius = %.3f", celsius);
  
  return 0;
}