#include <stdio.h>
#include <stdlib.h>

/// @brief Cria e aloca espaço para um vetor qualquer.
/// @param n O número de elementos do vetor
/// @param v Valor inicial a preencher o vetor
/// @return O endereço de memória do vetor preenchido
int * allocArray(int n, int v) {
    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) 
        a[i] = v;
    return a;
}

/// @brief Escreve um array.
/// @param a Ponteiro para o vetor
/// @param n Tamanho do vetor
void printArray(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);    
    printf("\n");
}

int main() { 
    int *a1 = allocArray(5, 3);
    printArray(a1, 5);
    // Saída: 33333
    return 0;
}
