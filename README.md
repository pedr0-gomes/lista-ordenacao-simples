# lista-ordenacao-simples
![Build](https://github.com/pedr0-gomes/lista-ordenacao-simples/actions/workflows/build.yml/badge.svg)
> Implementação dos principais algoritmos de ordenação básica em C, com variantes instrumentadas e comparativas

## Sobre o projeto
Repositório desenvolvido como parte de uma disciplina de Estruturas de Dados, com foco em algoritmos de ordenação por comparação. O objetivo é implementar, instrumentar e comparar Bubble Sort, Selection Sort, Insertion Sort, Merge Sort e Quick Sort, partindo de uma TAD utilitária compartilhada (`sorting.h` / `sorting.c`) que centraliza operações auxiliares como `swap` e `imprimir_array`.

## Estrutura do repositório
```
lista-ordenacao-simples/
├── sorting.h                       — interface pública da TAD utilitária (swap, imprimir_array)
├── sorting.c                       — implementação das funções utilitárias
├── template.c                      — esqueleto para novos exercícios
├── Makefile                        — regra genérica: qualquer .c linka com sorting.c
├── bubble_sort.c                   — implementação base do Bubble Sort
├── bubble_sort_instrumentado.c     — Bubble Sort com contagem de comparações e trocas
├── bubble_sort_optimizado.c        — Bubble Sort com early stop (flag houveTroca)
├── bubble_sort_comparativo.c       — comparação experimental: base vs. otimizado (n=20)
├── bubble_sort_ordem.c             — Bubble Sort com parâmetro de ordem (crescente/decrescente)
├── selection_sort.c                — implementação base do Selection Sort
├── selection_sort_tracado.c        — Selection Sort com trace por iteração do laço externo
├── selection_sort_metricas.c       — Selection Sort instrumentado (comparações e trocas reais)
├── selection_sort_ordem.c          — Selection Sort com parâmetro de ordem
├── insertion_sort.c                — implementação base do Insertion Sort
├── insertion_sort_tracado.c        — Insertion Sort com trace por iteração do laço externo
├── insertion_sort_instrumentado.c  — Insertion Sort com comparações e movimentações
├── merge_sort.c                    — Merge Sort recursivo com função merge separada
└── quick_sort.c                    — Quick Sort com particionamento de Lomuto
```

## Como compilar e executar
**Ambiente:** Windows 11 + PowerShell + GCC via MinGW

```powershell
# Compilar qualquer exercício via Makefile
make bubble_sort.exe

# Executar
.\bubble_sort.exe
```

```powershell
# Ou compilar manualmente
gcc -Wall -o bubble_sort.exe bubble_sort.c sorting.c
.\bubble_sort.exe
```

> O Makefile usa uma regra genérica `%.exe: %.c sorting.c`, portanto qualquer arquivo `.c` do repositório compila com o mesmo comando substituindo o nome.

## Implementação

A TAD utilitária (`sorting.h` / `sorting.c`) centraliza `swap` e `imprimir_array`, eliminando duplicação entre os exercícios. Cada algoritmo vive em seu próprio `.c` com função de ordenação e `main` de testes.

**Bubble Sort** — três variantes além da base: instrumentado (contagem de comparações e trocas), otimizado com early stop via flag `houveTroca`, e comparativo que roda ambas as versões lado a lado em vetores ordenado, reverso e aleatório com n=20.

**Selection Sort e Insertion Sort** — cada um com variante de trace (estado do vetor a cada iteração), variante instrumentada e variante com parâmetro de ordem (1 crescente, -1 decrescente).

**Merge Sort** — recursivo, com função `merge` separada que aloca vetor temporário via `malloc`. A divisão usa `meio = (inicio + fim) / 2`.

**Quick Sort** — particionamento de Lomuto com pivô no último elemento. O índice `m` marca a fronteira entre menores e maiores; ao final de cada chamada, o pivô é movido para sua posição definitiva.

### Complexidade

| Algoritmo       | Melhor caso | Caso médio | Pior caso  |
|-----------------|-------------|------------|------------|
| Bubble Sort     | O(n)¹       | O(n²)      | O(n²)      |
| Selection Sort  | O(n²)       | O(n²)      | O(n²)      |
| Insertion Sort  | O(n)        | O(n²)      | O(n²)      |
| Merge Sort      | O(n log n)  | O(n log n) | O(n log n) |
| Quick Sort      | O(n log n)  | O(n log n) | O(n²)²     |

> ¹ Com a variante otimizada (early stop). A versão base permanece O(n²) no melhor caso.  
> ² O pior caso do Quick Sort ocorre quando o pivô é sempre o menor ou maior elemento (ex: vetor já ordenado com pivô no último elemento).

## Exemplo de saída

```
Bubble Sort
Antes:  5 8 5 1 3 7 5 4 2 9
Depois: 1 2 3 4 5 5 5 7 8 9

Selection Sort
Antes:  5 8 5 1 3 7 5 4 2 9
Depois: 1 2 3 4 5 5 5 7 8 9

Insertion Sort
Antes:  5 8 5 1 3 7 5 4 2 9
Depois: 1 2 3 4 5 5 5 7 8 9

Merge Sort
Antes:  5 8 5 1 3 7 5 4 2 9
Depois: 1 2 3 4 5 5 5 7 8 9

Quick Sort
Antes:  5 8 5 1 3 7 5 4 2 9
Depois: 1 2 3 4 5 5 5 7 8 9
```

## Aprendizados
- A diferença entre complexidade teórica e comportamento prático fica evidente nas variantes instrumentadas: Selection Sort tem número de comparações praticamente constante entre os três casos (ordenado, reverso, aleatório), enquanto Bubble Sort varia significativamente.
- A flag `houveTroca` no Bubble Sort otimizado reduz o melhor caso de O(n²) para O(n) — o exercício comparativo torna essa diferença mensurável com métricas reais.
- Merge Sort e Quick Sort introduzem o paradigma dividir-para-conquistar e recursão com múltiplos pontos de chamada, exigindo raciocínio sobre estado do vetor em diferentes níveis da pilha de chamadas.

## Status
Concluído — todos os algoritmos implementados, testados e versionados via PR.