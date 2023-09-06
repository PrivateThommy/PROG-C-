#include <stdio.h>

int supe(int num ) 
{
  int multi = 1;
  int ultra;
  
  while (multi <= 10) 
  { 
    ultra= num * multi;
    printf("%d \n", multi);
    multi++;
  }
  return multi;
}

int mult(int mais ) 
{
  int multiplicador = 1;
  int multi;
    while (multiplicador <= 10) 
    { 
    multi= mais * multiplicador;
    printf("%d, ", multi);
    multiplicador++;
    }
  return multi;
}

int main() 
{
  int nume;
  int ou;
  int numero;
  int s;
  int num = 1;
  printf("digite o numero: ");
  scanf("%d", &nume);
  ou = mult(nume);
  printf("\nlista de tabuadas: \n");
  
  while (num <= 10)
  { 
  s = mult(num); 
  num++;
  printf("\n ");
  }

}