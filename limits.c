#include <stdio.h>
#include <limits.h>

int main()
{
    printf("su questa macchina gli interi sono\n");
    printf("formati da %ld byte. \n", sizeof(int));


    printf("il minimo numero rappredentabile è %d\n", INT_MIN);
    printf("il massimo numero rappresentabile è %d\n", INT_MAX);

    return 0;
} 
