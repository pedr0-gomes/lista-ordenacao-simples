/*
Enunciado:
Adapte o Selection Sort para receber ordem(1 crescente, -1 decrescente). Mostre os testes com o mesmo vetor das duas ordens e valide a saída. 
*/
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

/*
Função principal do exercício
*/
void selectionSortOrdem(int *V,int n,int ordem)
{
    for (int i = 0;i < n-1;i++)
    {
        int menor_maior = i;
        for (int j = i+1; j < n;j++)
        {
            if (V[j] < V[menor_maior] && ordem == 1)
            {
                menor_maior = j;
            }
            if (V[j] > V[menor_maior] && ordem == -1)
            {
                menor_maior = j;
            }
        }
        if ( i != menor_maior)
        {
            swap(&V[i],&V[menor_maior]);
        }
    }
}

int main(void)
{
    int n = 5;
    int v[] = {10, 5, 8, 3, 1} ;  
    
    printf("Vetor original:\n");
    imprimir_array(v,n);
    
    printf("Ordenação crescente:\n");
    selectionSortOrdem(v,n,1);
    imprimir_array(v,n);
    
    // resetando o vetor para a ordenação decrescente
    int v2[] = {10, 5, 8, 3, 1};
    printf("Ordenação decrescente:\n");
    selectionSortOrdem(v2,n,-1);
    imprimir_array(v2,n);
    

    return 0;
}