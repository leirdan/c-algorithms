#include <stdio.h>

/// @brief Faz a troca de valores entre duas variáveis inteira
/// @param a Endereço de memória da 1ª variável
/// @param b Endereço de memória da 2ª variável
void change(int *a, int *b) { 
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() { 
    // Escrever uma função que troca o valor de duas variáveis.
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);
    change(&x, &y); // Passar os endereços de memória como argumentos
    printf("%d %d\n", x, y);
    // Isso não é tecnicamente passar por referência, já que estamos passando somente os valores dos endereços, mas é uma forma mais similar à implementada em C++.
}
