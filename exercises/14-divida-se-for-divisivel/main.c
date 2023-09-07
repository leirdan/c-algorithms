#include <stdio.h>

int main() {
	// Escreva um programa que leia dois números inteiros e os divida somente se eles forem divisíveis.
	
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % b == 0) {
		printf("Resultado: %d \n", (a/b));
	}
	return 0;
}
