#include <stdio.h>

int main(){
	// Escreva um programa que lê 3 números inteiros e determina se um deles é soma dos outros dois, usando condicionais.

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b + c || b == a + c || c == a + b){
		printf("Um dos números é a soma dos outros dois. \n");
		return 0;
	}
	printf("Nenhum dos números é a soma dos outros dois.\n");
	return 0;

}
