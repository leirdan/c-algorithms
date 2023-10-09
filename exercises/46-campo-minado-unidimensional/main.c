#include <stdio.h>
#include <string.h>
#define MAX 20
int main() {
    // Escreva um programa que leia uma string representando um mapa de campo minado, onde * é uma bomba e . é um espaço vazio.
    // Em seguida, leia um inteiro que representa um índice nesse mapa. Por fim, escreva "bum!" se houver uma bomba nesse mesmo índice, ou um número inteiro representando quantas bombas adjacentes ao bloco há.
    char m[MAX];
    int i;
    int b = 0;
    scanf("%s", m); // Leitura do mapa da matriz
    scanf("%d", &i); // Leitura do índice
    // Verificar se o índice contém uma bomba
    if (m[i] == '*') {
        printf("bum!");
        return 1;
    } 
    // Se não conter, faça:
    else {
        // Se o índice for o primeiro, verifique somente o posterior
        if (i == 0) {
            if (m[i+1] == '*') { b++; }
        } 
        // Se o índice for o último, verifique somente o anterior
        else if (i == strlen(m) - 1) {
            if (m[i - 1] == '*') { b++; }
        }
        // Se não for nenhum dos casos acima, verifique o anterior e o posterior
        else {
            if (m[i-1] == '*') { b++; }
            if (m[i+1] == '*') { b++; }
        }
        printf("%d", b);
        return 1;
    }
}