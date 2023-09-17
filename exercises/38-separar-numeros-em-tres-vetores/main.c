#include <stdio.h>

int main() {
        // Escreva um programa que lê 15 inteiros em um vetor A, e depois os espalha em vetores B, C e D.

        int a[15];
        int b[15] = {0}, c[15] = {0}, d[15] = {0};
        int lenB = 0, lenC = 0, lenD = 0;
        for (int i = 0; i < 15; i++) {
                scanf("%d", &a[i]);
                // Verifico logo no loop.
                if (a[i] % 2 == 0) { b[lenB] = a[i]; lenB++; }
                if (a[i] % 3 == 0) { c[lenC] = a[i]; lenC++; }
                if (a[i] % 2 != 0 && a[i] % 3 != 0) { d[lenD] = a[i]; lenD++; }
        }

        // Varrer vetor B.
        printf("B = [");
        for (int i = 0; i < lenB; i++) {
                        // Verifica se chegou ao fim
                       if (i + 1 == lenB) { printf("%d]", b[i]); }
                        else { printf("%d, ", b[i]); }
        }

        // Varrer vetor C.
        printf("\nC = [");
        for (int i = 0; i < lenC; i++) {
                    // Verifica se chegou ao fim
                        if (i + 1 == lenC) { printf("%d]", c[i]); }
                        else { printf("%d, ", c[i]); }
        }

        // Varrer vetor D.
        printf("\nD = [");
        for (int i = 0; i < lenD; i++) {
                    // Verifica se chegou ao fim
                        if (i + 1 == lenD) { printf("%d]", d[i]); }
                        else { printf("%d, ", d[i]); }
        }

}
