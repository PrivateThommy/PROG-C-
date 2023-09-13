#include <stdio.h>

bool cont(int u[], int n, int e) 
{
    int i = 0;
    while (i < n) {
        if (u[i] == e) {
            return true;
        }
        i++;
    }
    return false;
}

int main() 
{
    int taman = 0;
    printf("digite a quantidade de itens que voce quer na sua lista: ");
    scanf("%d", &taman);
    
    int u[taman];
    int item = 0;
    while (item < taman) 
    {
        printf("digite o valor do item %d: ", item);
        scanf("%d", &u[item]);
        item++;
    }
    
    int elem;

    printf(" Digite o elemento a ser verificado: ");
    scanf("%d", &elem);

    if (cont(u, 5, elem)) 
    {
        printf( "O seu elemento %d esta no vetor.", elem);
    } 
    else 
    {
      printf( "O seu elemento %d não está no vetor.", elem);
    }

    
}