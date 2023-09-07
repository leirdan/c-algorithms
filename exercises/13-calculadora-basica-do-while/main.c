#include <stdio.h>

int main() {
	int x, y;
        char op;
	
	do { 
		scanf("%d %c %d", &x, &op, &y);
		switch (op){ 
			case '+': printf("%d + %d = %d \n", x, y, (x + y)); break;
			case '-': printf("%d - %d = %d \n", x, y, (x - y)); break;
			case '*': printf("%d * %d = %d \n", x, y, (x * y)); break;
			case '/': printf("%d / %d = %d \n", x, y, (x / y)); break;
			default: continue;
		}
	} while (op != 'F');
	
	return 0;
}
