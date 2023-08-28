#include <stdio.h>
#include <limits.h>

int main() {
        // Escreva um programa que leia n números inteiros e determine o maior entre eles.

        int l, num, big = INT_MIN;
        scanf("%d", &l);
        if (l < 0) { return -1; }
        for (int i = 0; i < l; i++) {
                scanf("%d", &num);
                if (num > big) {
                        big = num;
                }
        }

        printf("%d", big);

        return 0;
}
