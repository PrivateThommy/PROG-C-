#include <stdio.h>

int busca(int v[], int n, int e) 
{
    int ult = -1;
    for(int i = 0; i < n; i++) 
    {
        if (v[i] == e) 
        {
            ult = i;
        }
    }
    return ult;
}

int main() 
{
    int taman = 1;
    printf("digite a quantidade de itens no vetor: ");
    scanf("%d", &taman);
    
    int V[taman];
    int item = 0;
    while (item < taman) 
    {
        printf("digite o tamanho na lista %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    
    int elem;
    printf("Digite o numero a verificar: ");
    scanf("%d", &elem);
    
    int ult = busca(V, taman, elem); 

    if(ult != -1) 
    {
        printf("O elemento foi encontrado na posição %d.\n", ult);
    }
    else
    {
        printf("\n");
    }
}