#include <stdio.h>

float c2f(float x)
{
    return (x * 9/5 ) + 32;
}

float f2c(float x)
{
    return (x - 32) * 5/9;
}



int main() 
{
    float temp;
    int met;
    printf("(1) Converter de Celsius para Fahrenheit \n(2) Converter de Fahrenheit para Celsius\n");
    printf("Qual a Medida que gostaria de utilizar: \n");
    scanf("%d", &met);
    if (met != 1 && met != 2 )
    {
     printf("Tente Novamente... \n");  
    }
  
    if (met == 1)
    {
        printf("Escreva a sua temperatura em Celsius: \n");
        scanf("%f", &temp);
        printf("A sua temperatura em Fahrenheit é de: %.2fF \n", c2f(temp));
    }
    
    if (met == 2)
    {
        printf("Escreva a sua temperatura em Fahrenheit: \n");
        scanf("%f", &temp);
        printf("A sua temperatura em Celsius é de: %.2fC \n", f2c(temp));
    }
    
}
