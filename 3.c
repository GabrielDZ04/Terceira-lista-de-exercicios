#include <stdio.h>

int main(){

  int n1, n2=0;
  float n3;
  
    printf("Escreva um numero inteiro:");
    scanf("%d", &n1);

    while (n2==0)
    {
      printf("Escreva um segundo numero inteiro:");
      scanf("%d", &n2);

      if (n2==0)
      {
        printf("VALOR INVALIDO! Insira um numero inteiro diferente de zero.\n");
      }
      
    }

    n3=n1/(float)n2;

    printf("Resultado da divisao entre os numeros digitados: %.2f", n3);

  


  return 0;
}