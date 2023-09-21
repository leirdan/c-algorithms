#include <stdio.h>

int main() {
        // Escreva um programa que crie uma matriz mxn e, a partir de um inteiro x, trace o percurso do começo ao fim da matriz e imprima a coluna final.
        int r, c;
        scanf("%d %d", &r, &c);
        int a[r][c];
        int t;

        // Leitura
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        scanf("%d", &a[i][j]);
                }
        }

        // Posição inicial - x é uma coluna, i é uma linha
        int x;
        scanf("%d", &x);
        // Percurso
        for (int i = 0; i <= r; i++) {
                t = a[i][x];
                if (t == 0) { } // Se for livre, continue
                else if (t == 1) { x--; } // Se tiver canaleta para a esquerda, retroceda uma coluna.
                else if (t == 2) { x++; } // Se tiver canaleta para a direita, avance uma coluna.

                if (x < 0 || x >= c) { printf("ops"); break; }
                
                if (i == r) { printf("%d ", x); break; }
        }

        return 0;
}
