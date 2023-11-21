#include <stdio.h>
#include <stdlib.h>

int main() { 
    // Escreva um programa que leia um inteiro n e, depois, n números em um vetor. Depois repita o processo para um inteiro m. Ao fim, imprima uma sequência ordenada dos n+m inteiros.
    int n;
    scanf("%d", &n);
    int *v1 = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &v1[i]);
    
    int m; 
    scanf("%d", &m);

    int *v2 = malloc(m * sizeof(int));

    for (int i = 0; i < m; i++)
        scanf("%d", &v2[i]);

    int *v3 = malloc((m + n) * sizeof(int));

    for (int i = 0; i < n; i++)
        v3[i] = v1[i];

    for (int i = 0; i < m; i++) 
	    v3[i + n] = v2[i];

    for (int i = 0; i < m + n; i++)
        printf("%d ", v3[i]);

    free(v1);
    free(v2);
    free(v3);

    return 0;
}
