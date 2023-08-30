#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int count;
    int random;
    count = 1;
    srand(time(NULL));
    random = 1 + rand()%100;
    printf("Rodei um dado, tente adivinhar um numero\n");
    printf("qual o seu chute: ");
    int chute;
    scanf("%d", &chute);
   while (chute != random)
        {
        
        printf("digite seu novo chute\n");
        scanf("%d", &chute);
        printf("voce ja tentou %d vezes\n", count);
        
        if (chute > random)
        {
            printf("ui, quase voce acertou, o seu chute foi maior do que o numero\n");
        }
        if (chute < random)
        {
            printf("ui, quase voce acertou, o seu chute foi menor do que o numero\n");
        }
        count = count + 1;
        }
    if (chute > 0 && chute <= 100)
    {   
        if (chute == random)
        {
            printf("Parabens voce acertou\n");
        }
    }
        else
        {
            printf("nao foi dessa vez\n");
            
        }

}
