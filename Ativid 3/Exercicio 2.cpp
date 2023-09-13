#include <stdio.h>

void invt(int vet[]) 
{
    int i = 0;
    int j = 4;
    while (i < j) 
    {
        int var = vet[i];
        vet[i] = vet[j];
        vet[j] = var;
        i++;
        j--;
    }
}

int main() 
{
    int taman = 5;
    
    int u[taman];
    int item = 0;
    while (item <taman) 
    {
        printf("digite o valor do seu item na lista %d: ", item);
        scanf("%d", &u[item]);
        item++;
    }

    invt(u);
    printf("O seu vetor esta invertido: ");
    for(int i = 0; i < taman; i++) 
    {
        printf("%d ", u[i]);
    }
}