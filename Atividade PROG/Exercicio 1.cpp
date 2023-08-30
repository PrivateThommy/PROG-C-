#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int random;
    srand(time(NULL));
    random = 1 + rand()%100;
    printf("Rodei um dado, tente adivinhar um numero\n");
    printf("qual o seu chute: ");
    int chute;
    scanf("%d", &chute);
  
    if (chute > 0 && chute <= 100)
    {
      if (chute == random)
      {
        printf("Parabens voce acertou\n");
      }
      if (chute > random)
      {
        printf("ui, quase voce acertou, o seu chute foi maior do que o numero\n");
      }
      if (chute < random)
      {
        printf("ui, quase voce acertou, o seu chute foi menor do que o numero\n");
      }
    }

    else
    {
       printf("nao foi dessa vez\n");
    }
}