#include <stdio.h>

int main(){
  int a,b;
  
  printf("dimmi A: ");
  scanf("%d", &a);
  printf("dimmi B: ");
  scanf("%d", &b);

  if (a>b){
    printf("Il maggiore tra i due è %d \n ",a);
  }
  else{
    printf("Il maggiore tra i due è %d \n ",b);
  }

  return 0;
}
  
  
