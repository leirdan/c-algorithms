#include <stdio.h>
#include <stdlib.h>

int main() { 
	
	int a[4] = {2, 10, 3, 8}; 

	int *p = &a[1]; // Endereço de memória

	printf("Valor: %d\n", *p); // Derreferenciar; deve escrever 10

	p += 1;
	
	// Ao invés de avançar 1, e somente 1, endereço na memória, ele avança a quantidade de bytes referente ao tipo;
	// Por exemplo, se é um inteiro, ele avança 4 bytes e não 1 byte; assim, ele vai parar no próximo elemento da sequência. 
	
	printf("Novo valor: %d\n", *p); // Escreve 3
	
	printf("Terceiro valor: %d\n", *(p+1)); // Escreve 8
	
	// Outro exemplo - contar caracteres de um vetor
	
	char s[] = "Matilda Mother by Pink Floyd";
	int c = 0;

	char *sp = s; // equivalente a escrever *sp = &s[0]
	
	while(*sp != '\0') { 
		c++;
		sp++; // Incrementa o ponteiro para ele avançar para o próximo byte na memória.
	}
	
	printf("Quantidade de caracteres em '%s': %d\n", s, c);

	getchar();

	return 0;
}
