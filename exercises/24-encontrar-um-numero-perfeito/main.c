#include <stdio.h>

int main() { 
	// Escreva um programa que determine se um número é perfeito ou não.
	// Obs.: um número perfeito é aquele que a soma de seus divisores positivos (com exceção dele mesmo) resulta no próprio número.

	int x, sum = 0;
	scanf("%d", &x);

	for (int i = 1; i < x; i++) { 
		if (x % i == 0) { 
			sum += i;
		}
	} 
	if (x == sum) { 
		printf("Perfeito");
	}
        else { 
		printf("Não perfeito");	
	}	

	return 0;
}
