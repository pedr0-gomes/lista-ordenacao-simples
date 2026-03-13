/*
Enunciado:
Implemente void insertionSort(int *V, int n) usando:
• chave = V[i]
• deslocamentos enquanto j > 0 && chave < V[j-1]
• inserção final da chave na posição correta. 
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

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
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    printf("Teste 4:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v4,n);
    // chamada da função de ordenação
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v4,n);

    return 0;
}