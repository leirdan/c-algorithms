#include <stdio.h>
#include <stdlib.h>

int main() { 
	
	// Escreva um programa que leia n e m números reais, aloque memória dinamicamente para cada um deles, junte ambos em um vetor resultante, imprima o vetor resultante e libere a memória.
	
	int m, n;
	scanf("%d %d", &m, &n);
	int *a, *b, *c;
	a = malloc(m * sizeof(int));
	b = malloc(n * sizeof(int));
	// Leitura dos elementos
	for (int i = 0; i < m; i++) { scanf("%d", &a[i]); }
	for (int i = 0; i < n; i++) { scanf("%d", &b[i]); }

	c = malloc((m + n) * sizeof(int));
	for (int i = 0; i < m; i++)
		c[i] = a[i];
	for (int i = 0; i < n; i++)
		c[m + i] = b[i];
	for (int i = 0; i < m + n; i++)  
		printf("%d\n", c[i]);
	
	free(a);
	free(b);
	free(c);
	return 0;
}
