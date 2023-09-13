#include <stdio.h>

bool cre(int vet[], int t) 
{
    int i = 1;
    int j = 0;
    while (i < t) 
    {
        if (vet[i] > vet[j]) 
        {
            i++;
            j++;
        } else {
            return false;
        }
    }  
    return true;     
}

int main() 
{
    int taman;
    printf("Digite a quantidade na sua lista: ");
    scanf("%d", &taman);
    
    int V[taman];
    int item = 0;
    while (item < taman) 
    {
        printf("Digite o valor do seu  item %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    
    if (cre(V, taman)) 
    {
        printf("A lista está em uma ordem crescente.\n");
    } 
    else 
    {
        printf("A lista está fora de ordem crescente.\n");
    }
}