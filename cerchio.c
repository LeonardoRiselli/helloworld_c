#include <stdio.h>

int main()
{
  float r, sup, cir;
  
  printf ("dimmi il raggio ");
  scanf("%f", &r);

  cir=2*3.14*r;
  sup=r*r*3.14;
  cir=(int)cir;
  sup=(int)sup;
  printf ("la ciconverenza è di %.0f CM \n", cir);
  printf ("la superficie è di %.0f CM \n", sup);

  return 0;
}
  

   
