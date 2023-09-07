#include <stdio.h>

// Escreva um programa que lê três inteiros e imprime se um deles é a soma dos outros dois sem o uso de condicionais.

int main(){
	int a, b, c;
	printf("Digite os três números: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Resposta: %d \n", (a + b == c || c + b == a || a + c == b));
}
