#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct
{
    int id;
    char name[200];
    int subject_id;
    float grade1;
    float grade2;
} Student ;


int main() { 
    // Escreva um programa que faça a leitura de até 10 alunos (do tipo Aluno) e exiba todos os dados e a nota final como uma média ponderada, onde nota1 tem peso 1 e nota2 tem peso 2.

    int n;
    scanf("%d", &n);
    Student *s;
    s = malloc(sizeof(Student) * n);
    // Leitura
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].id);
        getchar(); // Vírgula
        scanf("%s ", s[i].name); 
        s[i].name[0] = toupper(s[i].name[0]);
        getchar(); // Vírgula
        scanf(" %d", &s[i].subject_id);
        getchar(); // Vírgula
        scanf(" %f , %f", &s[i].grade1, &s[i].grade2);
    }
    // Impressão
    for (int i = 0; i < n; i++){
        float m = (s[i].grade1 * 1 + s[i].grade2 * 2) / 3;
        float t = floor(m * 10.0f) / 10.0f;
        printf("%s  , média final = %.1f", s[i].name, t);
    }
    free(s);
    return 0;
}
