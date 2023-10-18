
#include <stdio.h>
#include <stdlib.h>

int main() { 

	// Função MALLOC - alocar espaço dinamicamente na HEAP
	// Retorna o endereço base de todo o espaço alocado; ou seja, útil para criar um vetor.
	// Alternativamente, existe a função CALLOC, similar à malloc, mas inicializa todos os elementos com 0 e exige dois argumentos: o número de elememtos a serem reservados e a quantidade de bytes de cada um. Seria escrito como calloc(n, sizeof(int)), por exemplo.

	int *a; 
	int n; // Armazenada na pilha
	scanf("%d", &n);
	a = malloc(n * sizeof(int)); // Se n = 5, aloca um espaço de 20 bytes para caber os 5 inteiros no array. Assim, criamos um array dinamicamente. A memória só será liberada da HEAP quando o programa encerrar OU usarmos a função free.

       	// Função FREE - libera a memória para uso novamente do programa. É importante para que não ocorra o memory leak! 	
	free(a);
	// Memory leak - mais comum em sistemas complexos que usam mais memória, significa "vazamento de memória" e ocorre quando o programador aloca memória mas não a desaloca depois. Isso acarreta em cada vez mais utilizações de endereços de memórias da HEAP, que ocasiona lentidão e pode até parar o programa!

	// Função REALLOC - realocar um espaço que já estava alocado, tanto pra diminuir quanto aumentar
	
	a = realloc(a, sizeof(int)*2*n); // dobra o tamanho do vetor 'a'

	return 0;
}
