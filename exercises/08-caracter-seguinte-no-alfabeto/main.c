#include <stdio.h>

// Escreva um programa que recebe uma letra do alfabeto (com exceção de z/Z) e escreve a letra seguinte, sem o uso de condicionais.

int main(){
	char x;
	scanf("%c", &x);
	x++;
	printf("%c \n", x);
	return 0;
}
