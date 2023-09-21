#include <stdio.h>

int main() {
        // Escreva um programa que leia dois inteiros N e M, e determine quantos setores férteis estão cobertos por um irrigador e quantos não estão.
        // Se cada irrigador rega cada um dos setores vizinhos e nunca estão na margem

        int r, c;
        scanf("%d %d", &r, &c);
        int a[r][c];
        int f = 0, x = 0;

        // Preenchendo a matriz
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        scanf("%d", &a[i][j]);
                }
        }

        // Contar quantos setores férteis temos
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        if (a[i][j] == 1) {
                                x++;
                        }
                }
        }

        // Contar setores cobertos por um irrigador
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        if (a[i][j] == 1 && (a[i+1][j] == 2 || a[i][j+1] == 2 || a[i-1][j] == 2 || a[i][j-1] == 2)) {
                                f++;
                        }
                }
        }

        // Contar setores que não são cobertos por um irrigador
        x = x - f;

        printf("%d %d", f, x);

        return 0;
}
