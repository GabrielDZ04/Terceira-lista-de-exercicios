#include <stdio.h>

int main(){

  int n1, n2;
  float n3;
  
do
{
    printf("Escreva um numero inteiro:");
    scanf("%d", &n1);

    printf("Escreva um segundo numero inteiro:");
    scanf("%d", &n2);

} while (n2==0);

    n3=n1/(float)n2;

    printf("Resultado da divisao entre os numeros digitados: %.2f", n3);
  
  return 0;
}