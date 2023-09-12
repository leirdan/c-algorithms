#include <stdio.h>

int compareAnswers(int n, int a[], int s[]);

int main() {
        // Escreva um programa que receba a lista de respostas certas e as do aluno, e determine quantos acertos foram feitos.
        int n;
        scanf("%d", &n);
        int a[n], s[n];
        for (int i = 0; i < n; i++)
                scanf("%d", &a[i]);
        for (int j = 0; j < n; j++)
                scanf("%d", &s[j]);

        int correct = compareAnswers(n, a, s);
        printf("%d acertos", correct);
}

int compareAnswers(int n, int a[], int s[]) {
        int ok;
        for (int i = 0; i < n; i++) {
                if (a[i] == s[i])
                        ok++;
        }
        return ok;
}
