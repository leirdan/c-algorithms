#include <stdio.h>

int main() { 
	// Escreva um programa que leia dois horários e escreva a diferença entre eles.

	int h1, h2, m1, m2, hour, min;
	scanf("%d %d %d %d", &h1, &h2, &m1, &m2);

	// Implementar if que verifica se os valores estão no intervalo certo.
	
	// Vai ter que dar um arrodeio no relógio pra voltar pra h1
	// 16 00
	// 14 30
	if (h1 > h2) { 
		hour = 24 - (h1 - h2);
	}
       	else if (h2 > h1) { 
		hour = ;
	}

	// 15 50 
	// 17 30
	if (m1 > m2) {
       		
	} 
	// 16 00
	// 14 30
	else if (m2 > m1) { 
		hour--;
		min = m2 - m1;
	}	

	printf("%dh%dmin\n", hour, min);
	

	return 0;
}
