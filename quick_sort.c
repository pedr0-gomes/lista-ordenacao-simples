/*
Enunciado:
Implementar função void quickSort(int v[],int inicio,int fim) e testar ordenação com diversos exemplos.
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
int particiona(int v[],int inicio,int fim)
{
    int m = inicio-1;
    int pivo = v[fim];
    for (int i = inicio;i < fim;i++)
    {
        if (v[i] <= pivo)
        {
            m++;
            swap(&v[i],&v[m]);
        }
    }
    swap(&v[m+1],&v[fim]);
    return (m+1); 
}

void quickSort(int v[],int inicio,int fim)
{
    if (inicio < fim)
    {
        int pv = particiona(v,inicio,fim);
        quickSort(v,inicio,pv-1);
        quickSort(v,pv+1,fim);
    }
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
    quickSort(v1,0,n-1);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    quickSort(v2,0,n-1);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    quickSort(v3,0,n-1);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    printf("Teste 4:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v4,n);
    // chamada da função de ordenação
    quickSort(v4,0,n-1);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v4,n);

    return 0;
}