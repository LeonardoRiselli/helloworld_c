#include <stdio.h>

int main(){
  int a, b, c, d, e;

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

  if (a>b && a>c && a>d && a>e){
    printf ( "Il maggiore è %d \n ",a );
  }
  else if (b>a && b>c && b>d && b>e){
    printf ( "Il maggiore è %d \n ",b );
  }
  else if (c>b && c>d && c>a && c>e){
    printf ( "Il maggiore è %d \n ",c );
  }
  else if (d>b && d>c && d>a && d>e){
    printf ( "Il maggiore è %d \n ",d );
  }
  else{
    printf ( "Il maggiore è %d \n ",e );
  }

  return 0;

}
