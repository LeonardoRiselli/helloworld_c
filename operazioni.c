#include <stdio.h>
int main () {

  int n1, n2, som,mol,div,sott,rest;

  printf ( "dimmi il primo numero :");
  scanf ("%d", &n1);
  printf ( "dimmi il secondo numero :");
  scanf ("%d", &n2);

  som=n1+n2;
  sott=n1-n2;
  mol=n1*n2;
  div=n1/n2;
  rest=n1%n2;

  printf ("La somma è %d \n :", som);
  printf ("La sottrazione è %d \n:", sott);
  printf ("La moltiplicazion è %d \n: ", mol);
  printf ("La divisione è %d \n: ", div);
  printf ("Il resto è %d \n : ", rest)

  return 0;
}
