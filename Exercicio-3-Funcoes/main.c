#include<stdio.h>

int main (int agrc, char const *argv[])
{
  int a, b, c = 0; 
  printf("Digite o primeiro número: ");
  scanf ("%d", &a);
  printf("Digite o segundo número: ");
  scanf ("%d", &b);
  printf("Digite o terceiro número: ");
  scanf ("%d", &c);
  printf ("A soma dos três números é: %d", a+b+c);
  return 0;
}
 