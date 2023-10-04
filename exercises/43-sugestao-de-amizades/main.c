#include <stdio.h>

int main() {
    int m, u;
    scanf("%d", &m);
    int a[m][m];
    
    // Escrever as relações que cada usuário i tem com o usuário j
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    scanf("%d", &u); // Usuário
    
    // Encontra sugestões de amizades
    for (int i = 0; i < m; i++) {
        // Se não forem amigos, faça:
        if (i != u && a[u][i] == 0) {
            for (int j = 0; j < m; j++) {
            // Verifica se j não é igual a u, j não é igual a i e se j é amigo de u e i
                if (j != u && j != i && a[u][j] == 1 && a[i][j] == 1) {
                    printf("%d ", i);
                    break;
                }
            }
        } else { continue; }
    }
    
    return 0;
}
