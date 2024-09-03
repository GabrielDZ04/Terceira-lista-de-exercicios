#include <stdio.h>

int main(){

  int total=1, confirm;
  float valor_total, valor, valor_medio;

  do
  {
    printf("Escreva o valor de uma das mercadorias presentes:");
    scanf("%f", &valor);

    printf("Ha mais mercadorias? Digite 1 para continuar, e qualquer outro numero para terminar,");
    scanf("%d", &confirm);

    valor_total+=valor;

    if (confirm==1)
    {
      total++;
    }
    
  } while (confirm==1);

  valor_medio=valor_total/(float)total;

  printf("Media dos valores dos produtos: %f", valor_medio);
    
  return 0;
}