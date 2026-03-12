/*
Enunciado:
Implemente void bubbleSortOrdem(int v[], int n, int ordem):
• ordem = 1 crescente
• ordem = -1 decrescente
Teste com: n=0, n=1, repetidos, mistura de positivos/negativos.
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void bubbleSortOrdem(int v[],int n,int ordem)
{
    for (int i = 0; i < n-1;i++)
    {
        for (int j = 0;j < n-i-1;j++)
        {
            if (v[j] > v[j+1] && ordem == 1)
            {
                swap(&v[j],&v[j+1]);
            }
            else if (v[j] < v[j+1] && ordem == -1)
            {
                swap(&v[j],&v[j+1]);
            }
        }
    }
}
int main(void)
{
    // teste com vetor vazio, n = 1, repetidos, mistura de positivos e negativos
    int v1[] = {};
    int v2[] = {42};
    int v3[] = {5,8,5,1,3,7,5,4,2,9};
    int v4[] = {3,1,4,5,2,9,8,7,10,6};
    int v5[] = {5,-2,3,-1,0,4,-3,2,-4,1};
    int n1 = 0;
    int n2 = 1;
    int n3 = 10;
    int n4 = 10;
    int n5 = 10;

    printf("Teste 1: Vetor Vazio\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v1,n1);
    bubbleSortOrdem(v1,n1,1);
    printf("Vetor Depois da Ordenação (Crescente):\n");
    imprimir_array(v1,n1);
    // resetar o vetor para o teste do ordenação decrescente
    int v1_reset[] = {};
    bubbleSortOrdem(v1_reset,n1,-1);
    printf("Vetor Depois da Ordenação (Decrescente):\n");
    imprimir_array(v1_reset,n1);

    printf("Teste 2: Vetor com um Elemento\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n2);
    bubbleSortOrdem(v2,n2,1);
    printf("Vetor Depois da Ordenação (Crescente):\n");
    imprimir_array(v2,n2);
    // resetar o vetor para o teste do ordenação decrescente
    int v2_reset[] = {42};
    bubbleSortOrdem(v2_reset,n2,-1);
    printf("Vetor Depois da Ordenação (Decrescente):\n");
    imprimir_array(v2_reset,n2);

    printf("Teste 3: Vetor com Repetidos\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n3);
    bubbleSortOrdem(v3,n3,1);
    printf("Vetor Depois da Ordenação (Crescente):\n");
    imprimir_array(v3,n3);
    // resetar o vetor para o teste do ordenação decrescente
    int v3_reset[] = {5,8,5,1,3,7,5,4,2,9};
    bubbleSortOrdem(v3_reset,n3,-1);
    printf("Vetor Depois da Ordenação (Decrescente):\n");
    imprimir_array(v3_reset,n3);

    printf("Teste 4: Vetor com Mistura de Positivos e Negativos\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v4,n4);
    bubbleSortOrdem(v4,n4,1);
    printf("Vetor Depois da Ordenação (Crescente):\n");
    imprimir_array(v4,n4);
    // resetar o vetor para o teste do ordenação decrescente
    int v4_reset[] = {3,1,4,5,2,9,8,7,10,6};
    bubbleSortOrdem(v4_reset,n4,-1);
    printf("Vetor Depois da Ordenação (Decrescente):\n");
    imprimir_array(v4_reset,n4);

    printf("Teste 5: Vetor com Mistura de Positivos, Negativos e Repetidos\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v5,n5);
    bubbleSortOrdem(v5,n5,1);
    printf("Vetor Depois da Ordenação (Crescente):\n");
    imprimir_array(v5,n5);
    // resetar o vetor para o teste do ordenação decrescente
    int v5_reset[] = {5,-2,3,-1,0,4,-3,2,-4,1};
    bubbleSortOrdem(v5_reset,n5,-1);
    printf("Vetor Depois da Ordenação (Decrescente):\n");
    imprimir_array(v5_reset,n5);
    
    return 0;
}