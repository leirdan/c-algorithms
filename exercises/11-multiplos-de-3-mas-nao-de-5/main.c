#include <stdio.h>

// Escreva um programa que lê um número e imprime se ele é múltiplo de 3 mas não de 5, sem o uso de condicionais.

int main() {
	int n;
	scanf("%d", &n);
	// Verifica.
	printf("Resposta: %d \n", (n % 3 == 0 && n % 5 != 0 && n != 0));	
	return 0;
}
