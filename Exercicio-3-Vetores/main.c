#include <stdio.h>

int main() {
    int n, i;
    float num[4], soma = 0.0, media;

    printf("\nInsira a quantidade de notas para formar a media: ");
    scanf("%d", &n);

    while (n > 4 || n < 1) {
        printf("Erro! O numero tem que estar entre (1 a 4).\n");
        printf("Insira o numero novamente: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("\n%d. Insira as notas: ", i + 1);
        scanf("%f", &num[i]);
        soma += num[i];
    }

    media = soma / n;
    printf("\nMedia = %.2f", media);
    return 0;
}