/*
Enunciado:
Instrumente o Selection Sort com:
• comparacoes++ a cada comparação entre elementos
• trocas++ somente quando ocorrer troca real (quando menor != i)
Execute em (i) ordenado, (ii) reverso, (iii) aleatório, com n=20. 
Compare os resultados e explique por que o número de operações tende a ser “mais constante” que no Bubble.
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void selectionSortMetricas(int *V,int n)
{
    int comparacoes = 0, trocas = 0;
    for (int i = 0;i < n-1;i++)
    {
        int menor = i;
        for (int j = i+1; j < n;j++)
        {
            if (V[j] < V[menor])
            {
                menor = j;
            }
            comparacoes++;
        }
        if ( i != menor)
        {
            swap(&V[i],&V[menor]);
            trocas++;
        }
    }
    printf("Numero de comparacoes = %d\n",comparacoes);
    printf("Numero de trocas = %d\n",trocas);
}
int main(void)
{
    // crie os casos aleatório, reverso e ordenado com n = 20
    int n = 20;
    int v1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int v2[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int v3[] = {5,8,5,1,3,7,5,4,2,9,10,15,12,18,20,17,14,19,11,13};

    printf("Teste 1:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v1,n);
    // chamada da função de ordenação
    selectionSortMetricas(v1,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    selectionSortMetricas(v2,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    selectionSortMetricas(v3,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    return 0;
}