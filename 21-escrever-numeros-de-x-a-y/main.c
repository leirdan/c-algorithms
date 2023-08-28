#include <stdio.h>

int main() { 
	// Escreva um programa que lê todos os inteiros de x até y, seja y > x ou não.

	int x, y;
	scanf("%d %d", &x, &y);

	if (y > x) { 
		for (int i = x; i <= y; i++) { 
			printf("%d ", i);
		}
	}
	
	else if (x > y) { 
		for (int j = x; j >= y; j--) {
			printf("%d ", j);       
		}
	}
       	else { 
		printf("%d", y);
	} 	

	return 0;
}
