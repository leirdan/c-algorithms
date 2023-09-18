#include <stdio.h>

int main() { 
	// Escreva um programa que leia um inteiro M e MxM entradas, que representam quantos gols o time I fez contra o J, dado pelo elemento aIJ.
	// Ex.: a01 - time 0 fez x gols contra o time 1; a11 - inválido, pois o time 1 não joga contra ele mesmo; a65 - time 6 fez x gols contra o time 5
	// Note que cada time só joga uma vez contra outro adversário. Logo, o resultado do jogo de a1314 e a1413 é o mesmo! 
	// Objetivo: Determinar quantas partidas terminaram empatadas. Ou seja, em quantos momentos, o valor de aij foi igual ao de aji.
	int m, e = 0;
	scanf("%d", &m);
	int a[m][m];

	// Leitura dos resultados dos jogos
	for (int i = 0; i < m; i++) { // row  
		for (int j = 0; j < m; j++) { // column 
			scanf("%d", &a[i][j]);
		}
	}

	// Determinar os empates
	for (int i = 0; i < m; i++) { 
		for (int j = i + 1; j < m; j++) {
			if (a[i][j] == a[j][i]) { 
				e++;
			}
		}
	}

	printf("%d", e);

	return 0;
} 
