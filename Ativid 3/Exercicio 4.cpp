#include <stdio.h>

int busca(int v[], int n, int e) {
  int i = 0;
  int men = -1;
    while (i < n) {
        if (v[i] == e) {
            return i;
        }
        i++;
    }
    return men;
}

int main() 
{
    int taman = 1;
    printf("digite a quantidade de itens nasua lista: ");
    scanf("%d", &taman);
    
    int V[taman];
    int item = 0;
    int elem;
    while (item < taman) 
    {
        printf("digite o valor do item %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    

    printf("Digite o elemento a ser verificado: ");
    scanf("%d", &elem);
    
    int achou = busca(V, taman, elem);
    
    if (achou != -1) 
    {
        printf("o seu numero %d esta na posicao %d.\n", elem, achou);
    } 
    else 
    {
        printf(" %d \n", achou );
    }
}