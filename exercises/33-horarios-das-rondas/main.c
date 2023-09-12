#include <stdio.h>

void printTime(int time);
int addTime(int seconds, int iterator);

int main() { 
	// Escreva um programa que liste os horários das rondas dos policiais com base em um horário inicial.
	int h, m, s, time = 0;
	// Coletar horário inicial
	scanf("%d %d %d", &h, &m, &s);
	// Converter em segundos
	time = (h * 3600) + (m * 60) + s;
	
	int aux;
	for (int c = 1; c <= 4; c++) { 
		// Calcular o acréscimo		
		aux = addTime(time, c);
		// Imprimir		
		printTime(aux);
	}

	return 0;
} 

int addTime(int seconds, int iterator) { 
	if (iterator == 1) {
		return seconds + 3600;
	}
	else if (iterator == 2) { 
		return seconds + 7830;
	}
	else if (iterator == 3) { 
		return seconds + 16850;
	}
	else if (iterator == 4) {
		return seconds + 43505;       
	}
}

void printTime(int time) {
	// Converter para hora, minuto e segundo	
	int h = time / 3600;
	if (h >= 24) {
		h = h - 24;       
	} 
	int r = time % 3600;
	int m = r / 60;	
	int s = r % 60;

	printf("%02d:%02d:%02d\n", h, m, s);
}
