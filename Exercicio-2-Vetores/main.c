#include <stdio.h>

int main() {

    int i, opcao;
    float vetor[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor dos numeros reais %d: ", i);
        scanf("%f", &vetor[i]);
    }
  
    for(i = 9; i >= 0; i--){
        printf("\n A ordem inversa dos numeros e: %.f", vetor[i]);
    }
          

    return 0;
}