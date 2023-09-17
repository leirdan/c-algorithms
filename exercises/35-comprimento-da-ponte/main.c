#include <stdio.h>

int max(int a[]);

int n = 0;

int main() {
        // Escreva um programa que leia o número N que representa a quantidade de colunas do 'mapa' e N números inteiros onde cada número representa a altura de uma coluna no mapa e imprima o comprimento da ponte que será construída entre os dois pontos mais altos.
        // Basicamente, eu tenho que ler um array de tamanho N, determinar os dois números iguais mais altos e quantas casas distantes um está do outro.
        scanf("%d", &n);
        int a[n];
        int first = 0, second = 0;

        // Preencher o array
        for (int i = 0; i < n; i++) {
                scanf("%d", &a[i]);
        }

        int x = max(a);

        // Percorre o array original procurando as ocorrências do maior valor
        for (int i = 0; i < n; i++) {
                if (a[i] == x) {
                        if (first == 0) { first = i + 1; }
                        else { second = i; }
                }
        }
        printf("%d", second - first);
}

int max(int a[]) {
        int m = 0;
        for (int i = 0; i < n; i++) {
                if (a[i] > m) { m = a[i]; }
        }
        return m;
}
