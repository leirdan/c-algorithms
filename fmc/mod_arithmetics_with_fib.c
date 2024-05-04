#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

// Escreva um programa que calcule M_n = F_n mod 2^m para qualquer par de inteiros n, m tais que 0 < n < (2^31) - 1, 0 < m < 20 e F_n é o n-ésimo elemento da sequência de Fibonnaci.

int get_n_on_fibonnaci(int n);
int compute_mod(int x, int m);

int main() 
{
  char opc = 'y';
  int n, m, x, mod;

  for (int i = 0; ; i++) 
  {
    printf("n (element on fibonnaci's sequence): ");
    scanf("%d", &n);
    printf("m (2 exponent): ");
    scanf("%d", &m);

    if (n < 1 || m < 1 || m > 20 || n >= INT_MAX) { printf("Invalid.\n"); exit(1); }

    x = get_n_on_fibonnaci(n); 

    mod = compute_mod(x, m);
    
    printf("Fn's mod: %d\n", mod);
    printf("retry? (y/n)");
    getchar();
    scanf("%c", &opc);
    if (opc != 'y') break;
  }

  return 0;
}

int compute_mod(int x, int m) 
{ 
  int y = pow(2, m);
  
  if (y > x) return x;
  
  return x % y;
}

// Não é necessário gerar a sequência de fibonnaci inteira. Basta gerar ela até onde precisar, pegar o número desejado e retorná-lo.
int get_n_on_fibonnaci(int n) 
{ 
  if (n == 0) return 0; 

  if (n == 1) return 1; 

  int base_1 = 0, base_2 = 1, t = 0;

  for (int i = 1; i < n; i++) 
  { 
    t = base_1 + base_2;
    base_1 = base_2;
    base_2 = t;
  }
  
  return t;
}
