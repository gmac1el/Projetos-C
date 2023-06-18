#include <stdio.h>
//Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: 
//A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; 
//A mensagem "Reprovado", se a média for menor do que sete; 
//A mensagem "Aprovado com Distinção", se a média for igual a dez.

int main(void) {
  
  float primeira_nota, segunda_nota, media;

  printf("\nDigite a primeira nota do aluno: ");
  scanf("%f", &primeira_nota );

  printf("\nDigite a segunda nota do aluno: ");
  scanf("%f", &segunda_nota );

  media = (primeira_nota + segunda_nota) / 2;

  if (media == 10) 
    {
      printf ("\nAprovado com distinção - Média: 10 "); 
      }
  else if (media >= 7 && media < 10) 
  {
    printf ("\nAprovado"); 
    }
  else if (media <= 7) {
    printf ("\nReprovado"); 
  }
        


  



  
  return 0;
}