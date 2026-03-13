/*
Enunciado:
Implementar função void mergeSort(int *v,int inicio,int meio,int fim)
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

void merge(int *V,int inicio,int meio,int fim)
{
    int tamanho = fim-inicio+1;
    int *temp = (int *) malloc(tamanho*sizeof(int));
    if (temp == NULL) return;
    int p1 = inicio;
    int p2 = meio + 1;
    int i = 0;

    while (p1 <= meio && p2 <= fim) {
        if (V[p1] <= V[p2]) {
            temp[i++] = V[p1++];
        } else {
            temp[i++] = V[p2++];
        }
    }

    while (p1 <= meio) {
        temp[i++] = V[p1++];
    }

    while (p2 <= fim) {
        temp[i++] = V[p2++];
    }

    for (int j = 0, k = inicio; j < tamanho; j++, k++) {
        V[k] = temp[j];
    }
    free(temp);
}

void mergeSort(int *V,int inicio,int fim)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim)/2;
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}
/*
Função principal do exercício
*/

int main(void)
{
    int v1[] = {1,2,3,4,5,6,7,8,9,10};
    int v2[] = {10,9,8,7,6,5,4,3,2,1};
    int v3[] = {5,8,5,1,3,7,5,4,2,9};
    int v4[] = {3,1,4,5,2,9,8,7,10,6};
    int n = 10;

    printf("Teste 1:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v1,n);
    // chamada da função de ordenação
    mergeSort(v1,0,n-1);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    mergeSort(v2,0,n-1);    
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    mergeSort(v3,0,n-1);        
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    printf("Teste 4:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v4,n);
    // chamada da função de ordenação
    mergeSort(v4,0,n-1);    
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v4,n);

    return 0;
}
