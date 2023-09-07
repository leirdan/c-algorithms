#include <stdio.h>

int isPrimeTwin(int n);

int main() { 
	// Escreva um programa que determine se um número n forma um par de primos com n+2, sendo assim um primo gêmeo.
	int x, result;
	scanf("%d", &x);
	result = isPrimeTwin(x);
        if (result == 1) { printf("Numero forma par de gemeos \n"); } 	
	else { printf("Numero nao forma par de gemeos\n"); }
	return 0;
}

// n = 3
int isPrimeTwin(int n) {
	if (n < 2) { return -1; } 
	// Verifica se é primo.
	for (int i = 2; i < n; i++) { 
		if (n % i == 0) { return -1; break; } 
	}
	// Verifica se n+2 é primo.
	for (int j = 2; j < n+2; j++) { 
		if ((n + 2) % j == 0) { return -1; break; } 
	}
	return 1;
} 
