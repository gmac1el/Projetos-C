#include "stdio.h"

int main(void) {

  float peso ;0.0; // em quilos;
  float altura ;0.0;  // em centimetros;
  float IMC = 0.0;  
  char ch;

  print:
  printf("Insira seu peso em quilos:");
  scanf("%f", &peso);
  
  printf("Insira sua altura em centimetros:");
  scanf("%f", &altura);

  IMC = peso * 10000 / (altura * altura);

  again:
  if(peso <= 0)
    
    printf("Erro. O peso deve ser maior que 0.");
  
  else if(altura <= 0)
    printf("erro. A altura deve ser maior que 0."); 

printf("\t");
   printf("Voce quer inserir outro valor? (1 = S/0 = N)\n");
  scanf ("%c", &ch);
printf("\t");

  
  if(IMC <= 18.5)
    printf("\nSeu IMC e %.2f: Abaixo.\n", IMC);
  else if (IMC <= 24.9)
    printf("\nSeu IMC e %.2f: Normal.\n", IMC);
  else if (IMC <= 29.9)
    printf("\nSeu IMC e %.2f: Acima.\n", IMC);
  else 
    printf("\nSeu IMC e %.2f: Obeso.\n", IMC);

 if(ch == 's' || ch == 'S')
     goto print;
   
 else if(ch == 'n' || ch == 'N')
   return 0;
  
  goto again;
 
  return 0;
}
