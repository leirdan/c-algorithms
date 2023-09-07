#include <stdio.h> 

int main() { 
	// Escreva um programa que calcule em quantos dias um tablete de dimensões nxn, onde n é uma potência de 2, terá um tamanho quadrado.
	
	int a, b, days = 0, aux = 0;
	scanf("%d %d", &a, &b);

	if (a == b) { printf("0"); return 0; }
	
	if (b > a) { 
		aux = a;
		a = b;
		b = aux;
	} 

	for (days; a != b; days++) {	       
		b = b * 2;
		if (a == b || b > a) { days++; break; }
	} 

	printf("%d", days);


	return 0;
}
