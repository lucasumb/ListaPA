#include <stdio.h>

int main()
{
    int v[10], i;
    int *pulo;

    pulo = v;

    for(i=0; i<10; i++){
        pulo[i] = i+1;
    }
    i=2;
    printf("v[%d] = %d \n", i , v[i]);
    printf("v[%d] = %d \n", i , *(pulo + 2));
    printf("v[%d] = %d \n", i , *(pulo + 4));
    printf("v[%d] = %d \n", i , pulo + 4);
    printf("v[%d] = %d \n", i , pulo + 2);

}
