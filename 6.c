#include <stdio.h>

int main(){

  float n1, n2, n3;
  int confirm;
  
do
{

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

  printf("Resultado da divisao entre os numeros digitados: %.2f\n", n3);

  printf("Deseja calcular uma nova media? Digite 1 para sim, e 0 para nao.");
  scanf("%d", &confirm);

} while (confirm==1);

  
  return 0;
}