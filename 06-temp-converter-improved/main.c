#include <stdio.h>

int main() {
	float temp;
       	char scale;
	float celsius, fahr, kelvin;
	// Informe a temperatura e a escala de entrada.
	printf("Digite a temperatura seguida da escala:");
	scanf("%f %c", &temp, &scale);
	// Faça as conversões necessárias e imprima a temperatura nas 3 escalas.
	switch(scale){
		case 'c':
			celsius = temp;
			fahr = (temp * 1.8) + 32;
			kelvin = temp + 273.15;
			break;
		case 'f':
			celsius = (temp - 32) / 1.8;
			fahr = temp;
			kelvin = celsius + 273.15;
			break;
		case 'k':
			celsius = temp - 273.15;
			fahr = (temp - 273.15) * 1.8 + 32;
		        kelvin = temp;
			break;
		default: 
			printf("Não são permitidas temperaturas nessa escala.");
			break;	
	}
	printf("As temperaturas são: \n"
		"- Celsius = %.1fºC \n"
		"- Fahrenheit = %.1fºF \n"
		"- Kelvin = %.2fK \n", celsius, fahr, kelvin);
	
	return 0;
}
