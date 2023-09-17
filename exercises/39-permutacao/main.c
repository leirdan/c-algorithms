#include <stdio.h>
#include <stdbool.h>

int findElementIndex(int a[], int x, int n);

int main() {
        // Escreva um programa que lê N números inteiros e determine se eles são uma permutação dos números entre 1 e M
        int n, x, r;
        scanf("%d", &n);
        int a[n], b[n];

        // Números de 1 a N
        for (int i = 0; i < n; i++) {
                a[i] = i + 1;
        }
        // Lê os números e adiciona em um array próprio.
        for (int i = 0; i < n; i++) {
                scanf("%d", &b[i]);
        }
        // Verifica, pra cada elemento de b, se ele pertence a um dos elementos de a
        for (int i = 0; i < n; i++) {
                r = findElementIndex(a, b[i], n);
                if (r >= 0) { continue; }
                else { r = -1; break; }
        }

        // Verificar se todo elemento de a pertence a b
        for (int i = 0; i < n; i++) {
                r = findElementIndex(b, a[i], n);
                if (r >= 0) { continue; }
                else { r = -1; break; }
        }

        if (r == -1) { printf("não \n"); }
        else { printf("sim\n"); }
}

int findElementIndex(int a[], int x, int n) {
        for (int i = 0; i < n; i++) {
                if (x == a[i]) { return i; }
        }
        return -1;
}

