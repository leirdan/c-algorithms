#include <stdio.h>

int main() { 
	// Escreva um programa que lê 4 inteiros e imprime o maior. Se houver empate, imprima somente 1.
	int a, b, c, d, big;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a >= b && a >= c && a >= d) { big = a; }
        else if (b >= a && b >= c && b >= d) { big = b; }	
	else if (c >= a && c >= b && c >= d) { big = c; }
	else if (d >= a && d >= b && d >= c) { big = d; }

	printf("Maior: %d \n", big);

	return 0;
}
