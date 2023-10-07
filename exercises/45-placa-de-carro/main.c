#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <regex.h>

#define MAX 21

int main() {
	// Escreva um programa que leia uma string de até 20 caracteres, e informe se a string contém uma placa de carro, que é formada pela sequência do formato abc-1234
	char p[MAX];
	int res;
	char* pattern = "^[A-Z]{3}-[0-9]{4}";
	regex_t reg;
	fgets(p, sizeof(p), stdin); // Leitura da string
	p[20] = '\0';

	// Compila a expressão regular
	res = regcomp(&reg, pattern, REG_EXTENDED|REG_NOSUB);

	// Verifica se há algum trecho na string que bate com o padrão da expressão regular
	res = regexec(&reg, p, 0, NULL, 0);
	if (res == REG_NOMATCH || strlen(p) > 8) { printf("não"); }
	else if (res == 0) { printf("sim"); }
	return 0;
}

