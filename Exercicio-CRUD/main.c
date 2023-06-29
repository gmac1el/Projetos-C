#include <stdio.h>
#include "criarcadastro.h"
#include "lercadastro.h"
#include "atualizacadastro.h"
#include "menu.h"

int main(void) {
  int codigo;
  int op;

  op=0;

  op=menu();
  switch ( op ){
    case 1 :
      codigo=criarCadastro(); 
      break;
    case 2 :
      lerCadastro( codigo );
      break;
    case 3 :
      codigo = atualizaCadastro( codigo );
      break;
 // deletarCadastro();

    default :
      printf("\n Opcao invalida\n");
  }
  return 0;
}