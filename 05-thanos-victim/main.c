#include <stdio.h>

int main() {
	// Thanos, além de sortear se vai ou não destruir o universo, agora quer sortear alguém específico para destruir.
	int petals, chosen;
	// Recebe um número de pétalas e outro que indica a vítima de acordo com uma tabela.
	printf("Digite o número de pétalas e o número da vítima: ");
	scanf("%d %d", &petals, &chosen);
	// Verifica se ele vai destruir alguém, e quem é esse alguém.
	if (petals % 2 == 0) {
		switch(chosen){
			case 0:
				printf("Mal te quer, Homem de Ferro...\n");
				break;
			case 1:
				printf("Mal te quer, Capitão América...\n");
				break;
			case 2:
				printf("Mal te quer, Homem Aranha...\n");
				break;
			case 3:
				printf("Mal te quer, Viúva Negra...\n");
				break;
			case 4:
				printf("Mal te quer, Thor...\n");
				break;
			case 5:
				printf("Mal te quer, Dr. Estranho...\n");
				break;
			default:
				printf("Mal te quer... ops, esse herói não existe...\n");
				break;
		}

	} else {
		printf("Bem te quer... os heróis se salvaram!\n");
	}	
	return 0;
}
