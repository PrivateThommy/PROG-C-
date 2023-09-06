#include <stdio.h>

float soma(float x, float y, float z)
{
    return x + y + z;
}



int main() 
{
    float num1;
    float num2;
    float num3;
    printf("Escreva o seu primeiro numero: \n");
    scanf("%f", &num1);
    
    printf("Escreva o seu segundo numero: ");
    scanf("%f", &num2);
  
    printf("Escreva o seu terceiro numero");
    scanf("%f", &num3);
    
    printf("A soma dos seus numeros é de: %.2f \n", soma(num1, num2, num3));
}