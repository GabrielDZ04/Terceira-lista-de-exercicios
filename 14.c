#include <stdio.h>

int main(){

  int i, n1;

  do
  {
    printf("Escreva um numero acima de 0:");
    scanf("%d", &n1);

  } while (n1<=0);
  
  
  for (i = 1; i <=n1; i++)
  {
    for (size_t z = n1; z>=i; z--)
    {
      printf("* ");
    }

    printf("\n");
    
  }
  
  

  
  return 0;
}