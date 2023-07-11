#include <stdio.h>

int main(){

    int numero;
  printf ("Digite um número inteiro: ");
  scanf ("%i", &numero);

    while(numero != 0){
        if (numero < 0){
            numero *= -1;
            printf("-");
        }
        printf("%i", numero % 10);
        numero /= 10;

    }

    return 0;

}