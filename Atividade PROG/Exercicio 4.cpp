#include <stdio.h>

int main() 
{
    int num;
    int div;
    div = 1;
    
    printf("Escreva um número inteiro: \n");
    scanf("%d", &num);
    
    printf("Os divisores de %d são: 1 ", num);
  
    while (div <= num / 2) 
    {
      div++;
      
      if (num % div == 0) 
      {
          
          printf(", %d\n", div);
          
      }
      
    }
    printf(", %d\n", num);
}
