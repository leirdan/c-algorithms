#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/// @brief Faz a troca de valores entre duas variáveis de dois tipos quaisquer.
/// @param a Endereço de memória da 1ª variável
/// @param b Endereço de memória da 2ª variável
/// @param size Tamanho de bytes que deverão ser alocados
void change(void *a, void *b, int size) { 
    void * aux = malloc(size);
    memcpy(aux, a, size); // Copia de "a" para "aux" no tamanho "size"; equivalente a aux = a, se tivéssemos tipos definidos.
    memcpy(a, b, size); // a = b;
    memcpy(b, aux, size); // b = aux;
    free(aux);
}

int main() { 
    // Escrever uma função que troca o valor de duas variáveis.
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);
    change(&x, &y, sizeof(int)); // Passar os endereços de memória como argumentos
    printf("%d %d\n", x, y);
}
