#include <stdio.h>

int main() {
  int n, contador=0;
  printf("Insira o número: ");
  scanf ("%d", &n);

  if (n==0)
    printf ("Só existe um dígito no seu número.");
  else 
    while (n!=0)
      {
        n = n/10;
        contador++;
      }
  printf ("Existem %d dígitos no seu número", contador);

  return 0;
}