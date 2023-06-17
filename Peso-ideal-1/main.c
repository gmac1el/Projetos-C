#include <stdio.h>

int main()
{
  
  float h;
  float peso_m;
  float peso_f;
  char sexo;

  printf("Insira o seu sexo. Para masculino digite 'm'. Para feminino digite 'f' :\n");
  scanf("%c",&sexo);
  printf("Insira a sua altura (ex: 1.75): \n");
  scanf("%f",&h);

  if(sexo == 'm')
   
  {  
 peso_m = (72.8 * h) - 58  ;
 printf("\n O peso ideal do homem é: %.2f", peso_m);
  } 
 
  else if (sexo == 'f') 

  {  
 peso_f = (62,1 * h) -44.7;
 printf("\n o peso ideal é: %.2f", peso_f);
  }

 return 0;
}