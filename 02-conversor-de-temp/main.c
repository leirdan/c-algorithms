#include <stdio.h>

int main() {
	double fahrTemp, celsiusTemp;
	printf("Insert the temperature: ");
	scanf("%lf", &fahrTemp);
	celsiusTemp = (fahrTemp - 32) / 1.8;
	printf("You inserted %.2lfºF. ", fahrTemp);
	printf("This is the temperature in celsius: %.2lfºC. \n", celsiusTemp);
}


