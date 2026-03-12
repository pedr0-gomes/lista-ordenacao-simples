/*
Enunciado:
 Implemente bubbleSortInstrumentado(int v[],int n) com:
• comparacoes++ a cada comparação
• trocas++ a cada swap
Imprima comparacoes e trocas ao final.
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void bubbleSortInstrumentado(int v[],int n)
{
    int comparacoes = 0,trocas = 0;
    for (int i = 0; i < n-1;i++)
    {
        for (int j = 0;j < n - i - 1;j++)
        {
            comparacoes++;
            if (v[j] > v[j+1])
            {
                trocas++;
                swap(&v[j],&v[j+1]);
            }
        }
    }
    printf("Numero de comparacoes = %d\n",comparacoes);
    printf("Numero de trocas = %d\n",trocas);
}
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
    bubbleSortInstrumentado(v1,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    bubbleSortInstrumentado(v2,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    bubbleSortInstrumentado(v3,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    printf("Teste 4:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v4,n);
    // chamada da função de ordenação
    bubbleSortInstrumentado(v4,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v4,n);

    return 0;
}