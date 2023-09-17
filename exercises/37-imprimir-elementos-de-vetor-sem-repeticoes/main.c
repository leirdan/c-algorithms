#include <stdio.h>
#include <stdbool.h>

bool isElDuplicated(int x, int a[], int l);

int main() {
        // Escreva um programa que leia o tamanho N de um vetor, seus valores e imprima os valores sem repetição.
        int n, x;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
                scanf("%d", &x);
                a[i] = x;
                if (!isElDuplicated(x, a, i)) {
                        printf("%d ", x);
                }
        }
        return 0;

}

bool isElDuplicated(int x, int a[], int l) {
        // Verifica somente as posições de 0 até o limite
        for (int i = 0; i < l; i++) {
                if (x == a[i]) { return true; }
        }
        return false;
}
