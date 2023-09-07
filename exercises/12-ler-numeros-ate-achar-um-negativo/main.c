#include <stdio.h>

int main() { 
	int n = 0, sum = 0;
	while (n >= 0) { 
		sum += n;
		scanf("%d", &n);
	}
	printf("Soma dos números: %d \n", sum);
	return 0;
}
