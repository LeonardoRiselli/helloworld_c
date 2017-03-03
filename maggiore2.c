#include <stdio.h>

int main(){
 int a,b,magg;
  
  printf("dimmi A: ");
  scanf("%d", &a);
  printf("dimmi B: ");
  scanf("%d", &b);

  magg=a;

  if (b>magg){
    magg=b;
  }

  printf("il maggiore tra i due è : %d \n",magg);

  return 0;
}

