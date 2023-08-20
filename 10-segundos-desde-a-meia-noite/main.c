#include <stdio.h>

// Escreva um programa que lê 3 inteiros (horas, minutos e segundos), e escreva quantos segundos se passaram desde a meia noite.

int main(){
	int h, m, s, amount;
	scanf("%d %d %d", &h, &m, &s);
	if (h > 23 || m > 59 || s > 59) { return 1;}
	
	// Converter tudo em segundos.
	amount = (h*60*60) + (m * 60) + s;
	
	printf("%d \n", amount);
	return 0;
}
