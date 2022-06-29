
#include <stdio.h>


int main() {
   int array[0];
   int i, valor, tamanho=0, busca,posiçao=-1;

   printf("\nDigite um valor: ");
   scanf("%d", &valor);

   while(valor != 0) {
      array[tamanho] = valor;
      tamanho++;

      printf("\nDigite outro valor: ");
      scanf("%d", &valor);
 }
  printf("\nDigite o valor para realizar a busca: ");
   scanf("%d", &busca);

    for (i=0; i<tamanho; i++) {
    if(busca==array[i]) {
      printf("\nFoi encontrado o valor: %d na posiçao: %d \n", busca, i);
      posiçao = i;
    }
   }

   if(posiçao==-1) {
    printf("\nNenhum valor encontrado %d", busca);

   }






}
