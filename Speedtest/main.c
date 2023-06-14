#include <stdio.h>

int main(void) {

  float tamanho; 0.0; // em MB
  float velocidade; 0.0; // em Mbps
  float tempo; 0.0; // em minutos

//Ler tamanho em MB
  printf ("\nInsira o tamanho do arquivo em MB:");
  scanf ( "%f", &tamanho );
  
//Ler velocidade em mbps
  printf ("\nInsira a velocidade da internet em Mbps:");
  scanf ( "%f", &velocidade);

//Calculo
  tempo=(tamanho * 1 / velocidade * 1);

//Resultado
  printf ("\nO tempo estimado para download e de: %.1f minutos", tempo);

  return 0;
}