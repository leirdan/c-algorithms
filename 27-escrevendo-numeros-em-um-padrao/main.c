#include <stdio.h>

int main(){
	// Escreva um programa que leia um número e escreva conforme o padrão:
	// Para n = 4
	// 1 2 3 4
	// 2 3 4 5
	// 3 4 5 6
	// 4 5 6 7
	
	int n, aux = 1;
	scanf("%d", &n);

	for (int col = 1; col <= n; col++) { 
		for (int row = aux; row <= n; row++) { 
			printf("%d \n", row);
		}
		aux++;
		n++;
	}

	return 0;
} 
