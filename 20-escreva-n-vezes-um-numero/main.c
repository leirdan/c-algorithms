#include <stdio.h>

int main() { 
	// Escreva um programa que lê dois números e imprime o primeiro a quantidade de vezes do segundo.
	
	int x, n;
	scanf("%d %d", &x, &n);
	
	for (int i = 1; i <= n; i++) { 
		if (i == n) { 
			printf("%d\n", x);
			break;
		} 
		printf("%d, ", x);
	} 
	

	return 0; 
}
