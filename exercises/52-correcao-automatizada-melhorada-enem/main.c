#include <stdio.h>
#include <stdlib.h>

int main() {
    // Escreva um programa que leia um inteiro n, n respostas das questões do enem e as n respostas do aluno. Ao fim, informe os acertos (ou acerto) do aluno.
    
    int n;
    scanf("%d", &n);
    int *g = malloc(n * sizeof(int));
    int *a = malloc(n * sizeof(int));
    int qtd = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &g[i]);
    
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (g[i] == a[i]) {
            qtd++;
        }
    }

    if (qtd < 0) {
        printf("Sem acertos\n");
    }
    else if (qtd == 1) {
        printf("1 acerto");
    }
    else {
        printf("%d acertos", qtd);
    }

    free(g);
    free(a);
    
    return 0;
}