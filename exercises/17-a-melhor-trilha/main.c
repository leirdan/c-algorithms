#include <stdio.h>

int main() {
	// Escreva um programa que determine o nível mais adequado de uma trilha para uma pessoa com base na tabela do exercício proposto do LOP.
	int trails, health, result;
	scanf("%d", &trails);
	
	if (trails >= 0 && trails < 5) { 
		result = 1;	
	}
       	else if (trails >= 5 && trails < 20) {
	        scanf("%d", &health);	
		if (health == 0) { result = 1; }
		else if (health == 1) { result = 2; }
		else { result = -1; }
	}
	else if (trails >= 20) {
	        scanf("%d", &health);	
		if (health == 0) { result = 2; }
		else if (health == 1) { result = 3; }
		else { result = -1; } 
	} 	

	if (result == 1) { printf("Iniciante. \n"); }
        else if (result == 2) { printf("Intermediário.\n"); }
	else if (result == 3) { printf("Avançado.\n"); }
	else { printf("Não existe tal categoria.\n"); } 	

	return 0;
}
