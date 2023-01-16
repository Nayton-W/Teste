#include <stdio.h>

int main(void) {
  char nome [10],tel[100],endereco[100];
  
  printf("Digite seu nome:\n");
  gets (nome);
  
  printf("\nDigite seu telefone:\n");
  gets (tel);
  
  printf("\nDigite seu endereço:\n");
  gets (endereco);

  printf("\n Nome: %s \n",nome);
  printf("\n Telefone: %s\n",tel);
  printf("\n Endereço: %s\n",endereco);
  
  return 0;
}