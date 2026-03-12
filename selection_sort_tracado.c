/*
Enunciado:
Para o vetor [64, 25, 12, 22, 11], escreva o estado do vetor ao final de cada iteração do laço externo (i = 0, 1, 2,3).
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void selectionSortTracado(int *V,int n)
{
    for (int i = 0;i < n-1;i++)
    {
        printf("Para i = %d\n",i);
        printf("Antes: ");
        imprimir_array(V,n);
        int menor = i;
        for (int j = i+1; j < n;j++)
        {
            if (V[j] < V[menor])
            {
                menor = j;
            }
        }
        if ( i != menor)
        {
            swap(&V[i],&V[menor]);
        }
        printf("Depois:");
        imprimir_array(V,n);
        printf("\n");
    }
}

int main(void)
{
    int v[] = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSortTracado(v,n);
    return 0;
}