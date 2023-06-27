#include <stdio.h>


int main() {
    char  resp1, resp2, resp3, resp4, resp5;
    int cont,cont1,cont2,cont3,cont4,contt;
    
    printf("Responda as perguntas com S para sim ou N para não.");
    
    printf("\nTelefonou para a vítima?");
    scanf("%c",&resp1);
    
    cont=0;
    
    if(resp1=='S'){
        cont1= cont + 1;
    }else{
        cont1= cont + 0;
    }
    
    printf("\nEsteve no local do crime?");
    scanf("%c",&resp2);
    