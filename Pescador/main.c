#include <stdio.h>

int main(void) {

//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

float peso = 0.0;
float limite = 50.0;
float excesso = 1.0;
float multa = 4.0;

//Ler peso de peixes
  printf ("\nInsira quantidade de quilos de peixes: ");
  scanf ("%f", &peso);

//Ler excesso de peso de peixes
  printf ("\nInsira a quantidade de quilos excedentes: ");
  scanf ("%f", &excesso);

//Calculo preço dos excedentes
  excesso = peso - limite;
  multa = excesso * multa;

//Resposta
  if (peso > limite)
  printf ("\nPeso acima do limite de 50kg. Multado em R$40 pelo excesso de kg.");
  else
  printf ("\nPeso dentro do limite de 50kg. Não foi multado.");

  return 0;
  
  
  


  
  
  

    

  









  
  return 0;
}