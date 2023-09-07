#include <stdio.h>

int main() {
        // Escreva um programa que leia dois números e verifique se o primeiro é resultado de uma exponenciação do segundo.
        int x, n, aux;
        scanf("%d %d", &x, &n);
        
        aux = n;

        for (n; n < x;) { 
            n = n * aux;
            if (n > x) { 
                break;
            }
        }	

	if (x == 1) { printf("sim"); }
	else if (n == x) { printf("sim");}
        else { printf("não"); }

        return 0;
}
