#include <stdio.h>
#include <stdlib.h>

int main() { 
    // Escreva um programa que leia um inteiro n e n números reais e, por fim, determine o índice do número mais alto lido.
    int n;
    scanf("%d", &n);

    float *v = malloc(n * sizeof(float));
    float *b = malloc(sizeof(float));

    // Leitura dos valores e determinação do maior
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        if (v[i] > *b) {
            b = &v[i];
        }
    }

    // Varrer e determinar o índice do maior valor.
    float *p = v; // Recebe o endereço base do vetor
    int index = 1;
    while (*p != *b) {
        index++;
        p++; // Avança para o próximo byte no vetor
    }

    printf("%d", index);

    // Liberação de memória
    free(v);

    return 0;
}
