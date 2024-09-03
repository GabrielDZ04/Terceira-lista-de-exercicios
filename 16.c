#include <stdio.h>

int main(){

  int total;
  float valor_total, valor, valor_medio;
  
  printf("Quantos produtos tem na sua loja?");
  scanf("%d", &total);

  for (size_t i = 0; i <= total; i++)
  {
    printf("Escreva o valor de uma das mercadorias presentes:");
    scanf("%f", &valor);

    valor_total+=valor;
  }

  valor_medio=valor_total/(float)total;

  printf("Media dos valores dos produtos: %f", valor_medio);
    
  return 0;
}