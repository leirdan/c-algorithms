#include <stdio.h>

int readScore();
int findMediumNumber(int a, int b, int c);

int main() { 
	// Escreva um programa que calcula se o skatista A ou B venceu com base nas suas pontuações em 3 dias.

	int skateA, skateB;
	skateA = readScore();
	skateB = readScore();

	if (skateA > skateB) { printf("A"); }
        else if (skateB > skateA) { printf("B"); }	
	else { printf("empate"); }
	return 0;
} 

int readScore() { 
	int x, y, z, n;
	int day1 = 0, day2 = 0, day3 = 0;
	for(int i = 0; i < 3; i++) { 
		scanf("%d %d %d", &x, &y, &z);
		n = findMediumNumber(x, y, z);
		if (day1 == 0) { 
			day1 = n;
		} else if (day2 == 0) { 
			day2 = n;
		}
		else if (day3 == 0) { 
			day3 = n;
		} 
	}
     	n = findMediumNumber(day1, day2, day3);	
	return n;
} 
int findMediumNumber(int a, int b, int c) { 
	int m;
	if ((a >= b && a <= c) || (a >= c && a <= b)) { 
		m = a;
	}
	else if ((b >= a && b <= c) || (b >= c && b <= a)) {
		m = b;       
	}
	else if ((c >= a && c <= b) || (c >= b && c <= a)) { 
		m = c;
	}
	return m;

} 
