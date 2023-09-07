#include <stdio.h>

int sumProperDivisors(int z);
int isTwoNumbersMates(int x, int y);
int main() { 
	// Escreva um programa que calcule se dois números são colegas ou não.
	int x, y, totalX, totalY;
	int result;
	scanf("%d %d", &x, &y);
	
	result = isTwoNumbersMates(x, y);

	if (result == 1) { printf("S\n"); }
        else { printf("N\n"); }	

	return 0;
}

int sumProperDivisors(int z) { 
	int sum = 0;
	if (z == 1) { sum = 1; return sum; }
	for (int i = 1; i < z; i++) { if (z % i == 0) { sum += i; } } 
	return sum;
} 

int isTwoNumbersMates(int x, int y) {
	int tX, tY;
	tX = sumProperDivisors(x);  
	tY = sumProperDivisors(y);
	if ((tX == y || (tX - 1) == y || (tX - 2) == y || (tX + 1) == y || (tX + 2) == y) && (tY == x || (tY - 1) == x || (tY - 2) == x) || (tY + 1) == x || (tY + 2) == x) { return 1; }
	else { return -1; }
} 

