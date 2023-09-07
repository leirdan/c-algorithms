#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração da interface.
int randomDices(int amount, int dices);

int main() { 
	int x, y;
	printf("Insira a quantidade de dados e o tipo: ");
	scanf("%d %d", &x, &y);
	int total = randomDices(x, y);
	printf("Total da rolagem: %d \n", total);
	return 0;
}

// Implementação
int randomDices(int amount, int value) { 
	// 4d6 - param
	time_t t;
	int result = 0, roll = 0;

	srand((unsigned) time(&t));
	printf("Dados: ");
	for (int i = 1; i <= amount; i++) {
		roll = (rand() % value) + 1;
		printf("%d ", roll);
	 	result += roll;	
	}
        printf("\n");	
	return result;
}
