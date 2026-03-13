/*
Enunciado:
Crie uma versão instrumentada que conte:
- comparacoes: apenas avaliações de condição do tipo chave < V[j-1]
- movimentacoes: atribuições no vetor V[...] - ...(inclui deslocamentos e inserção final da chave)
Teste com vetores: ordenado, reverso, aleatório(n=20).
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void insertionSort(int *V,int n)
{
    int comparacoes = 0, movimentacoes = 0;   
    for (int i = 1;i < n;i++)
    {
        int chave = V[i];
        int j = i;
        while (j > 0 && chave < V[j-1])
        {
            comparacoes++;
            movimentacoes++;
            V[j] = V[j-1];
            j--;
        }
        V[j] = chave;
        movimentacoes++;
    }
    printf("Numero de comparacoes = %d\n",comparacoes);
    printf("Numero de movimentacoes = %d\n",movimentacoes);
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
    insertionSort(v1,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v1,n);

    printf("Teste 2:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v2,n);
    // chamada da função de ordenação
    insertionSort(v2,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v2,n);

    printf("Teste 3:\n");
    printf("Vetor Antes da Ordenação:\n");
    imprimir_array(v3,n);
    // chamada da função de ordenação
    insertionSort(v3,n);
    printf("Vetor Depois da Ordenação:\n");
    imprimir_array(v3,n);

    return 0;
}