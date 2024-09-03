#include <stdio.h>

int main(){

  int i, z=0;
  float total, media;
  
  for (i = 15; i <=100; i++)
  {
    z++;
    total+=i;
    media=total/z;
    printf("%.2f\n", media);
  }
  

  
  return 0;
}