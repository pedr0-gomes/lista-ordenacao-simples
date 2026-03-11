#include <stdio.h>
#include "sorting.h"

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void imprimir_array(int *v,int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}
