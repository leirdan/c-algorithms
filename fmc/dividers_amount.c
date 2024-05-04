/* TODO
 * pensar em uma forma melhor de gerar a sequência sem usar números muito grandes para não consumir tantos recursos.
  * ideia?: gerar por intervalos. pensar se isso é possível pois os números 'a' e 'b' não são necessariamente elementos nem posições da sequência, mas intervalos. 
 * 
*/

#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que, dados dois inteiros, encontre o número de inteiros na sequência que se situa dentro do intervalo [a, b].

int * generate_sequence(int size);
int total_dividers(int limit);
int get_numbers_on_sequence(int * sequence, int start, int end);

int main() 
{ 
  int *sequence = NULL;
  int cases; 
  int max_b = 1;

  scanf("%d", &cases);
  
  if (cases > 1000 || cases <= 0) { printf("Invalid. \n"); exit(1); }

  int *a = malloc(sizeof(int) * cases);
  int *b = malloc(sizeof(int) * cases);

  for (int k = 0; k < cases; k++)
  {
    scanf("%d %d", &a[k], &b[k]);

    if (a[k] < 1 || b[k] < 1 || a[k] > 1000000 || b[k] > 1000000) { printf("Invalid. \n"); exit(1); }

    if (b[k] > max_b) max_b = b[k]; // Ainda a ser utilizado...  
  }

  sequence = generate_sequence(10000);

  int totalK;
  for (int k = 0; k < cases; k++) 
  { 
    totalK = get_numbers_on_sequence(sequence, a[k], b[k]); 
    printf("Caso %d: %d", k + 1, totalK);
  } 

  free(a);
  free(b);
  free(sequence);

  return 0;
}

int get_numbers_on_sequence(int * sequence, int start, int end) 
{ 
  int total = 0;

  for (int k = 0; ; k++) 
  {
    if (sequence[k] < start) continue;
    else if (sequence[k] > end) break;
    else total++;
  } 

  return total;
}

int total_dividers(int limit) 
{ 
  if (limit == 1) return 1; 

  int total = 0;

  for (int k = 1; k <= limit; k++) 
  {
    if ((float)(limit % k) == (float) 0) total++; 
  }

  return total;
}

int * generate_sequence(int size)
{
  int prev;
  int *seq = malloc(sizeof(int) * size);

  seq[0] = 1;
  for (int k = 1; k < size; k++) 
  {
    prev = k - 1;
    seq[k] = (seq[prev] + total_dividers(seq[prev]));       
  }

  return seq;
}
