#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief Enumerador que representa alguns tipos de jogos.
enum Game {
    // Evitar bugs.
    LUTA = 1,
    AVENTURA = 2,
    ESTRATEGIA = 3,
    ESPORTE = 4,
    RPG = 5
};
/// @brief Modelo de objeto que representa um jogador, com atributos de nome e tipo de jogo favorito.
typedef struct {
    char name[50];
    enum Game gameType; 
} Player;

/// @brief Função que associa uma string a um valor no enumerador Game.
/// @param s String digitada pelo usuário a ser comparada com alguns valores fixos.
/// @param players Ponteiro do vetor com dados dos jogadores.
/// @param i Índice para acessar o atual jogador.
void evaluate(char *s, Player *players, int i);
/// @brief Conta quantas vezes cada tipo de jogo foi mencionado como favorito.
/// @param p Ponteiro do vetor com dados dos jogadores.
/// @param points Ponteiro do vetor de 5 posições que marca a quantidade de menções dos tipos de jogos.
/// @param n Tamanho do vetor de jogadores.
void count_type(Player *p, int *points, int n);

int main() { 
    // Escreva um programa que crie um enumerador referente aos tipos de jogos, leia um inteiro N, depois leia N nomes de jogadores e o tipo de jogo que preferem.
    // Ao final, imprima quantos preferem cada tipo de jogo.
    int n;
    int points[5] = {0};
    scanf("%d\n", &n);
    Player *players = malloc(sizeof(Player) * n); // vetor de players
    for (int i = 0; i < n; i++) {
        scanf(" %49[^\n]", players[i].name);
        char s[13]; // string contendo o tipo de jogo 
        scanf(" %12s", s);
        evaluate(s, players, i);  
    }

    count_type(players, points, n);
    
    printf("Preferem LUTA: %d\n", points[0]);
    printf("Preferem AVENTURA: %d\n", points[1]);
    printf("Preferem ESTRATEGIA: %d\n", points[2]);
    printf("Preferem ESPORTE: %d\n", points[3]);
    printf("Preferem RPG: %d\n", points[4]);

    free(players);

    return 0;
}

void evaluate(char *s, Player *players, int i) {
    if (strcmp(s, "LUTA") == 0) { players[i].gameType = LUTA; }
    else if (strcmp(s, "AVENTURA") == 0) { players[i].gameType = AVENTURA; }
    else if (strcmp(s, "ESTRATEGIA") == 0) { players[i].gameType = ESTRATEGIA; }
    else if (strcmp(s, "ESPORTE") == 0) { players[i].gameType = ESPORTE; }
    else if (strcmp(s, "RPG") == 0) { players[i].gameType = RPG; }
}

void count_type(Player *p, int *points, int n) {
    for (int i = 0; i < n; i++) {
        if (p[i].gameType == LUTA) { points[0]++; }
        else if (p[i].gameType == AVENTURA) { points[1]++; }
        else if (p[i].gameType == ESTRATEGIA) { points[2]++; }
        else if (p[i].gameType == ESPORTE) { points[3]++; }
        else if (p[i].gameType == RPG) { points[4]++; }
    }
}