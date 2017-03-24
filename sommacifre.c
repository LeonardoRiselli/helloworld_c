#include <stdio.h>

int main ()
{
  int num, somma;

  printf( "numero di 3 cifre: " );
  scanf("%d", &num);

  if (num<100 || num>999)
  {
    printf("Il numero deve essere di 3 cifre \n ");
  }
  else
  {
    somma=num%10;
    num=num/10;
    somma=somma+(num%10);
    num=num/10;
    somma=somma+(num%10);
    
    printf( "la somma tra le cifre è %d \n",somma);
  }

  return 0;
}
