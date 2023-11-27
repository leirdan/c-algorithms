#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/// @brief Calcula a norma euclidiana de um vetor de n números
/// @param v Vetor com números reais
/// @param n Tamanho do vetor
/// @return Resultado da norma euclidiana
float norma(float *v, int n) {
    float result = 0;
    for (int i = 0; i < n; i++) {
        result += pow(v[i], 2);
    }
    result = sqrt(result);
    return result;
}

int main() { 
    // Escreva um programa que leia do usuário um inteiro n, aloque dinamicamente um vetor u de n números reais e escreva na tela, com duas casas decimais de precisão, a norma de u fazendo uso da função norma.
    int n;
    scanf("%d", &n);

    float *v = malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++) 
        scanf("%f", &v[i]);

    float res = norma(v, n);
    
    printf("%.2f \n", res);

    return 0;
}