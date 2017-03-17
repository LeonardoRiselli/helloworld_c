#include <stdio.h>

int main(){
  int a, b, c, d, e,magg;

  printf("Dimmi A: ");
  scanf("%d", &a);
  printf("Dimmi B: ");
  scanf("%d", &b);
  printf("Dimmi C: ");
  scanf("%d", &c);
  printf("Dimmi D: ");
  scanf("%d", &d);
  printf("Dimmi E: ");
  scanf("%d", &e);

  magg=a;

  if (b>magg){
    magg=b;
  }
  if (c>magg){
    magg=c;
  }
  if (d>magg){
    magg=d;
  }
  if (e>magg){
    magg=e;
  }

  printf("il maggiore è %d \n ", magg);
  

  return 0;

}
