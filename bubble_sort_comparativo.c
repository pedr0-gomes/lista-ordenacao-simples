/*
Enunciado:
Comparação experimental: sem otimização vs early stop (1 valor)
Gere 3 vetores com n=20: (i) já ordenado, (ii) reverso, (iii) aleatório. 
Rode Bubble normal e Bubble com early stop e compare as métricas. 
Qual caso reduz mais operações com early stop?
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

void bubbleSortOptimizado(int v[],int n)
{
    int comparacoes = 0, trocas = 0;
    for (int i = 0; i < n-1;i++)
    {
        int houve_troca = 0;
        comparacoes++;
        for (int j = 0;j < n - i - 1;j++)
        {
            if (v[j] > v[j+1])
            {
                swap(&v[j],&v[j+1]);
                houve_troca = 1;
                trocas++;
            }
        }
        if (houve_troca == 0) 
        {
            break;
        }
    }
    printf("Numero de comparacoes = %d\n",comparacoes);
    printf("Numero de trocas = %d\n",trocas); 
}

int main(void)
{
    // quero testar com n = 20

    int v1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int v2[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int v3[] = {5,8,5,1,3,7,5,4,2,9,6,10,7,3,8,10,6,9,2,4};
    int n = 20;

    printf("Caso 1: Vetor Ordenado\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v1,n);
    printf("Bubble Sort Instrumentado:\n");
    bubbleSortInstrumentado(v1,n);
    // resetando o vetor para o teste do bubble sort otimizado
    int v1_reset[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("Bubble Sort Otimizado:\n");
    bubbleSortOptimizado(v1_reset,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1_reset,n);

    printf("Caso 2: Vetor Reverso\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    printf("Bubble Sort Instrumentado:\n");
    bubbleSortInstrumentado(v2,n);
    // resetando o vetor para o teste do bubble sort otimizado
    int v2_reset[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    printf("Bubble Sort Otimizado:\n");
    bubbleSortOptimizado(v2_reset,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2_reset,n);

    printf("Caso 3: Vetor Aleatório\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    printf("Bubble Sort Instrumentado:\n");
    bubbleSortInstrumentado(v3,n);
    // resetando o vetor para o teste do bubble sort otimizado
    int v3_reset[] = {5,8,5,1,3,7,5,4,2,9,6,10,7,3,8,10,6,9,2,4};
    printf("Bubble Sort Otimizado:\n");
    bubbleSortOptimizado(v3_reset,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3_reset,n);

    return 0;
}