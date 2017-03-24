#include <stdio.h>

int main ()
{
  int num, somma, n1, n2, n3;

  printf( "numero di 3 cifre: " );
  scanf("%d", &num);

  if (num<100 || num>999)
  {
    printf("Il numero deve essere di 3 cifre \n ");
  }
  else
  {
    n1=num%10;
    n2=num/10;
    n3=n2/10;
    n2=n2%10;
    n3=n3%10;
    
    somma=n1+n2+n3;

    printf( "la somma tra le cifre è %d \n",somma);
  }

  return 0;
}
