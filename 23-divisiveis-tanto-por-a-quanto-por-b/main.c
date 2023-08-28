#include <stdio.h>

int main() { 
	// Escreva um programa que leia 2 inteiros e imprima os números de 1 a 1000 que são divisíveis por ambos.

	int x, y, c = 2;
	scanf("%d %d", &x, &y);

	while (c < 1000) {
       		if (c % x == 0 && c % y == 0) { 
			printf("%d ", c);
		}
		c++;
	} 

	return 0;
} 
