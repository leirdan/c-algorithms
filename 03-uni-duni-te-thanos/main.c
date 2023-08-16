#include <stdio.h>

int main(){
	int n;
	// Thanos pega uma flor com n petálas.
	printf("Insira o número de pétalas da flor: ");
	scanf("%d", &n);
	// Se o número de pétalas for ímpar, será "Bem me quer" e ele não destrói o universo.
	// Se n for par, será "Mal me quer" e ele destrói o universo.
	(n % 2 != 0) ? printf("Bem me quer... \n") : printf("Mal me quer! \n");
	
	return 0;
}

