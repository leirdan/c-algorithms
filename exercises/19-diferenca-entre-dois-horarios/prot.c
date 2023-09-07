#include <stdio.h>

int main() {
    // Escreva um programa que lê dois horários diferentes e imprime a diferença entre eles.
    int hour1, min1, hour2, min2, hour, min;
    int totalMin1, totalMin2;
    // Leia os dois horários.
    scanf("%d %d %d %d", &hour1, &min1, &hour2, &min2);

    if (hour1 > 23 || hour1 < 0 || hour2 > 23 || hour2 < 0 || min1 < 0 || min > 59 || min2 < 0 || min > 59) {
        return -1;
    }

    // Converta de horas pra minutos e compare ambos os horários
    
    totalMin1 = hour1 * 60 + min1;
    totalMin2 = hour2 * 60 + min2;
    
    // Se o primeiro horário for maior,

    if (totalMin1 > totalMin2) 
    { 
	 hour = (totalMin1 / 60) - (totalMin2 / 60); hour = 24 - hour;
	 min = (totalMin1 % 60) - (totalMin2 % 60); 
	 if (min < 0) { min += 60; } 
    } 
    else 
    {
    	hour = (totalMin2 / 60) - (totalMin1 / 60);
	min = (totalMin2 % 60) - (totalMin1 % 60);
	if (min < 0) { min += 60; }
    } 

 
/*	if (hour1 == 23 && hour2 == 0) { hour = 0; } 
	else if ((hour1 - hour2) <= 0) { hour = 24 + (hour1 - hour2); hour = 24 - hour; }	
	else { hour = (hour1 - hour2); } 

       	if ((min1 - min2) < 0) { min = 60 + (min1 - min2); min = 60 - min; }	
	else { min = 60 - (min1 - min2); }
  */      
        printf("%dh%dmin\n", hour, min);  
    return 0;
}
