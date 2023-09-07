#include <stdio.h>

int main(){
	// Os heróis farão um jogo de 'zero ou um' para saber quem vai derrotar o Thanos.
	int numThor, numStarlord, numSpider;
	// Colocam as apostas
	printf("Insira as apostas de cada um na ordem (Thor, Starlord e Homem-Aranha): ");
	scanf("%d %d %d", &numThor, &numStarlord, &numSpider);
	// Verifica se todos colocaram somente 0 ou 1
	if (numThor > 1 || numStarlord > 1 || numSpider > 1){
		printf("Alguém trapaceou. Joguem novamente \n");
		return -1;
	}
	// Verifica quem ganhou
	if (numThor == numStarlord && numStarlord == numSpider) {
		printf("Empate. Todos lutarão contra Thanos!\n");
	} else if (numThor > numStarlord && numThor > numSpider){
		printf("Thor lutará contra Thanos!\n");
	} else if (numStarlord > numThor && numStarlord > numSpider) {
		printf("Starlord lutará contra Thanos!\n");
	} else if (numSpider > numThor && numSpider > numStarlord) {
		printf("Homem-Aranha lutará contra Thanos!\n");
	} else {
		printf("Inconclusivo. Joguem novamente.\n");
	}
	

	return 0;
}

