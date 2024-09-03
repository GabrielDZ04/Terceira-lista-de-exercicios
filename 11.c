#include <stdio.h>

int main(){

  int i=1, n1;

  do
  {
    printf("Escreva um numero acima de 0:");
    scanf("%d", &n1);

  } while (n1<=0);
  
  
  for (i; i<=n1; i++)
  {
    printf("%d\n",i);
  }
  

  
  return 0;
}