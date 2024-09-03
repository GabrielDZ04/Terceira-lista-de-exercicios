#include <stdio.h>

int main(){

  float n1, n2, n3;
  
  do
  {
    printf("Escreva sua primeira media:");
    scanf("%f", &n1);

  } while (n1<0||n1>10);


  do
  {
    printf("Escreva sua segunda media:");
    scanf("%f", &n2);

  } while (n2<0||n2>10);

    n3=(n1+n2)/(float)2;

    printf("Resultado da media das notas digitadas: %.2f", n3);
  
  return 0;
}