#include <stdio.h>

// Escreva um programa que extrai o último dígito de um número e o separa do restante.

int main(){
	// Ler o número.
	int n, body, last;
	scanf("%d", &n);
	// Invalidar, caso seja menor que 0.
	if (n < 0) {
		return 1;
	}
	// Pegar o último caractere.
	last = (n % 10);
	// Separar o caractere do número.
	body = (n / 10);

	printf("%d %d \n", body, last);	
}
