#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber () { 
	// Gera um número aleatório para cada segundo do dia.
	srand(time(NULL));
} 

int main() { 
	// Escreva um programa que sorteia 10 números aleatórios.
	randomNumber();
	for (int i = 0; i < 10; i++) { 
		printf("%d\n", rand());
	}

	return 0;
}
