#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 40

void tolowerstring(char t[]); 
void initiliazeempty(int x[]);
// Um dos códigos mais ilegíveis que já fiz. Sem tempo de alterar, vai assim mesmo.
int main() { 
    // Escreva um programa que receba duas strings, A e B, e verifique quantas vezes A está dentro de B e em quais posições cada repetição inicia.
    char a[MAX];
    char b[MAX];
    int p[MAX];
    fgets(a, MAX-1, stdin); // Leitura da string A
    fgets(b, MAX-1, stdin); // Leitura da string B
    // Substituir último caractere por '\0'
    size_t len_a = strlen(a), len_b = strlen(b);
    if (a[len_a - 1] == '\n') { a[len_a - 1] = '\0'; }
    if (b[len_b - 1] == '\n') { b[len_b - 1] = '\0'; }

    int total = 0, count = 0;
    char x, y; // Temporárias
    bool isSub;

    tolowerstring(a);
    tolowerstring(b);
    initiliazeempty(p);

    for (int l = 0; l < len_b; l++) {
    // Pegar n caracteres de B a partir do índice i, onde n é o número de caracteres de A e i é uma posição.
    // Verificar individualmente se cada um bate; 
        // Se sim, salva a posição e incrementa o total em 1;
        // senão, pega os caracteres de B do índice i++ até n + i.
        if (l == 0){
            for (int i = l; i < len_a - 1; i++) {
                x = a[i-l]; y = b[i];
                if (x != y) { isSub = false; break; }
                else {isSub = true;}
            }
        } else {
            for (int i = l; i < len_a - 1 + l; i++) {
                x = a[i-l]; y = b[i];
                if (x == ' ') { break; }
                else {
                    if (x != y) {isSub = false; break; }
                    else {isSub = true;}
                }
            }
        }
        if (isSub == true) { total++; p[count] = l; count++; }
        else { continue; }
    }
    printf("Repetições: %d\n", total);
    // Se alguma posição tiver sido registrada, imprima-a
    if (p[0] != -1) {
        printf("Posições: ");
        for (int i = 0; p[i] != -1; i++) {
            printf("%d ", p[i]);
        }
    }
}

void tolowerstring(char t[]) {
    for (int i = 0; i < strlen(t); i++) {
        t[i] = tolower(t[i]);
    }
}

void initiliazeempty(int x[]) {
    for (int i = 0; i < MAX; i++){
        x[i] = -1;
    }
}
