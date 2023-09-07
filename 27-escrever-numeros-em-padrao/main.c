#include <stdio.h>

int main() { 
	// Escreva um programa que lê um número inteiro e escreve uma saída no padrão a seguir:
	// se n = 4:
	// 1 2 3 4
	// 2 3 4 5
	// 3 4 5 6
	// 4 5 6 7
	
	int n, row, k;
	scanf("%d", &n);

	row = n;
	int p = 1;
	int aux = 1;
	// Linha
	for (int i = 0; i < row; i++) { 
		// Elemento
		for (p; p <= n; p++) { 
			printf("%d ", p);	
		}
		aux++;
		p = aux;
		n++;
		printf("\n");
	} 
	return 0;
}

