#include <stdio.h>

int main(){

  int i=1, n1;

  do
  {
    printf("Escreva um numero acima de 0:");
    scanf("%d", &n1);

  } while (n1<=0);
  
  
  for (i = 1; i <=10; i++)
  {
    printf("%d\n",i*n1);
  }
  
  

  
  return 0;
}