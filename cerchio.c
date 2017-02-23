#include <stdio.h>

int main()
{
  double sup, cir;
  int r;
  
  printf ("dimmi il raggio ");
  scanf("%d", &r);

  cir=2*3.14*r;
  sup=r*r*3.14;

  printf ("la ciconverenza è di %f CM \n", cir);
  printf ("la superficie è di %f CM \n", sup);

  return 0;
}
  

   
