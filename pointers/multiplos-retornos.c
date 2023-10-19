#include <stdio.h>
#include <stdlib.h>

/// @brief Verifica no vetor inteiro qual o maior valor da sequência
/// @param a Ponteiro para o vetor
/// @param n Tamanho do vetor
/// @param big Endereço reservado para guardar o maior número
/// @param index Endereço reservado para guardar o índice do maior número
void bigger(int *a, int n, int *big, int *index) {
    *big = a[0];
    *index = 0;
    for (int i = 0; i < n; i++) {
        // Lembrar da derreferenciação para coletar os valores numéricos e não os endereços
        if (a[i] > *big) {
            *big = a[i]; // Muda o endereço de memória de big para o de a[i]
            *index = i;
        }
    }
}

int main() { 

    int a[] = {3, 13, 2, 4, 5};
    int big, index;
    bigger(a, 5, &big, &index);
    // big = endereço de memória de a[i]; index = endereço de memória de i; 
    printf("O maior elemento é %d na posição %d!", big, index);

    return 0;
}
