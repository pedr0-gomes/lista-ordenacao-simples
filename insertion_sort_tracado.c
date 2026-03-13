/*
Enunciado:
Para o vetor [5, 3, 4, 1, 2], escreva o vetor ao final de cada iteração do for (i=1; i<n; i++). 
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void insertionSortTracado(int *V,int n)
{
    for (int i = 1;i < n;i++)
    {
        printf("Para i = %d\n",i);
        printf("Antes: ");
        imprimir_array(V,n);
        int chave = V[i];
        int j = i;
        while (j > 0 && chave < V[j-1])
        {
            V[j] = V[j-1];
            j--;
        }
        V[j] = chave;
        printf("Depois: ");
        imprimir_array(V,n);
        printf("\n");
    }
}


int main(void)
{
    int v[] = {5, 3, 4, 1, 2};
    int n = 5;
    printf("Vetor antes da ordenação:\n");
    imprimir_array(v,n);
    printf("\n");
    // chamada da função de ordenação
    insertionSortTracado(v,n);
    
    return 0;
}