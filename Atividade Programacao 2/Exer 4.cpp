#include <stdio.h>

int div(int N, int D) 
{
    return N % D == 0;
}


int sub(int M) 
{
    int count = 0;
    int i = 1;
    while (i <= M) 
    {
        if (div(M, i)) 
        {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    int num;
    printf("digite um número: \n");
    scanf("%d", &num);
    
    int quant = sub(num);
    printf("O número possui %d divisores.\n", quant);
    
    return 0;
}
