#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
        // Escreva um programa que recebe uma frase de até 60 caracteres e transforme cada uma das letras iniciais em maiúsculas.
        // Dica: usar tabela ASCII.

        char t[60], word[60];
        char* c;
        fgets(t, sizeof(t), stdin); // Lendo uma string
        c = strtok(t, " "); // Fragmentando a string
        while (c != NULL) { 
            sscanf(c, "%s", &word);
            // Transformando para minúscula
            for (int i = 0; i < strlen(word); i++) {
                word[i] = tolower(word[i]);
            }
            word[0] = toupper(word[0]);
            printf("%s ", word);  
            c = strtok(NULL, " "); // Continua a ler o restante da string
        }

        return 0;
}