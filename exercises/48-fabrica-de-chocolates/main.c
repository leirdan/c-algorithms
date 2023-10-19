#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

enum ChocolateType { BRANCO, AMARGO, AO_LEITE, COM_CASTANHAS } ;

typedef struct { 
    char name[50];
    float price;
    float weight;
    enum ChocolateType type;
} Chocolate;

int main() { 
    // Escreva um programa que crie um enum de tipos de chocolate, um tipo (struct) chocolate e receba a quantidade N de chocolates a serem inseridos. Após isso, crie N chocolates e, ao final, mostre o total de chocolates por tipo e indique o chocolate mais caro e o mais barato.
    char aux[50];
    int n, big = 0, less = 100000, i_big, i_less;
    int x = 0, y = 0, z = 0, t = 0;
    scanf("%d", &n);
    Chocolate c[n]; // Vetor de objetos 'chocolate'

    for (int i = 0; i < n; i++) {

        getchar();

        fgets(c[i].name, 50, stdin);
        c[i].name[strlen(c[i].name) - 1] = '\0';
        scanf("%f %f", &c[i].weight, &c[i].price);
        scanf("%s", aux);

        if (strcmp(aux, "BRANCO") == 0) {
            c[i].type = BRANCO;
            x++;
        }
        else if (strcmp(aux, "AMARGO") == 0) {
            c[i].type = AMARGO;
            y++;
        }
        else if (strcmp(aux, "AO_LEITE") == 0) {
            c[i].type = AO_LEITE;
            z++;
        }
        else if (strcmp(aux, "COM_CASTANHAS") == 0) {
            c[i].type = COM_CASTANHAS;
            t++;
        }

        if (c[i].price > big) {
            big = c[i].price;
            i_big = i;
        }
        if (c[i].price < less) {
            less = c[i].price;
            i_less = i;
        }
    }

    printf("Total de chocolates BRANCO: %d\n", x);
    printf("Total de chocolates AMARGO: %d\n", y);
    printf("Total de chocolates AO_LEITE: %d\n", z);
    printf("Total de chocolates COM_CASTANHAS: %d\n", t);
    printf("Chocolate mais caro: %s - R$%.2f\n", c[i_big].name, c[i_big].price);
    printf("Chocolate mais barato: %s - R$%.2f", c[i_less].name, c[i_less].price);
    
    return 0;
}
