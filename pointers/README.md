# PONTEIROS

## 1. PRÉ-REQUISITOS
* Cada tipo em C ocupa um diferente número de bytes: uma variável *float* ocupa 4 bytes (32 bits) na memória, um *char* ocupa um byte (8 bits), um *int* ocupa 4 bytes, e por aí vai;
* Denominamos **endereço-base** o endereço inicial do espaço reservado na memória para a variável. Por exemplo, se um *int* ocupa 4 bytes na memória (suponha os endereços ABC123, ABC124, ABC125, ABC126), o endereço-base dele vai ser somente o primeiro endereço reservado para a variável (ABC123);
> Para escrever o endereço base das variáveis, podemos usar o caractere '&' da seguinte forma: `printf("%p", &inteiro);`

## 2. PONTEIROS
Um ponteiro é somente uma **variável que contém um endereço de memória**. Sua sintaxe é a mesma das outras variáveis, com a diferença de que o nome da variável é precedido por um asterisco, como em `int *numero;`. Vejamos um exemplo:
```c
int main() { 
	int num = 24.5;

	int *numP = &num; // Passamos um endereço de memória com o operador &.

	return 0;
}
```
O tipo que antecede o nome da variável-ponteiro indica ao compilador que é esperado que, neste endereço de memória de "num", haja um valor do tipo *int*.

### 2.1 DERREFERENCIAÇÃO DE PONTEIROS
Técnica utilizada para pegar o valor do endereço ao qual o ponteiro aponta. Levando em consideração o código escrito acima, podemos fazer:
```c
#include <stdio.h>

int main() {
        int num = 24.5;

        int *numP = &num;
	
	printf("%d", *numP); // Derreferenciação: será impresso o valor "24.5" ao invés do endereço.

        return 0;
}
```
Caso você tente criar um ponteiro do tipo *int* (4 bytes) que aponte para um espaço reservado para um *char* (1 byte), o resultado não sairá como o esperado, pois ele tentará acessar os 3 bytes seguinte ao do *char* (que não pertencem a ele).

### 2.2 UTILIZAÇÃO DO NULL
Ao criar um ponteiro é possível atribuir o valor NULL a este, indicando que ele não vai armazenar um valor de cara no momento de sua criação. Isso pode ser útil em alguns casos, como para indicar que o último elemento de uma lista encadeada é o último, mas deve ser usado com cuidado de modo a evitar erros como `segmentation fault`.
 
### 2.3 OPERAÇÕES ARITMÉTICAS EM PONTEIROS
É possível realizar operações aritméticas em ponteiros, mas de forma ligeiramente diferente. Consulte o arquivo `aritmetica.c` para mais informações e exemplos.

### 2.4 ALOCAÇÃO DINÂMICA
Em um computador, costumamos ter dois tipos de memória: a memória não-volátil (encontrada na forma de discos rígidos, por ex.) e a volátil (encontrada nas memórias RAM, por exemplo). 
Quando declaramos uma variável (ou seja, reservamos um espaço na memória para armazenar um valor), estamos acessando e guardando dados na memória **volátil** (RAM). Na verdade, isso não funciona de forma tão direta assim: existe a chamada **memória virtual** que é criada a cada processo inicializado no SO (Sistema Operacional) com um tamanho igual para todos os processos; o tamanho da memória é definido de acordo com a arquitetura do computador, mas não importa. O importante a notar é que cada processo ocupa alguns % de todo espaço designado a ele, e cada % representa também um % na memória RAM, mas que armazena todos os % de todos os processos. Logo, se tenho 3 processos ativos, cada um ocupando 20% da memória virtual designada a cada um deles, temos que a memória RAM estará com ocupação de 60%.
Caso chegue a 100% de ocupação da memória RAM, os dados precisam ir para algum lugar; eles vão, mas para o disco rígido, este que é mais lento e ocasiona a lentidão e dificuldade de operação nas máquinas.

Entretanto, mesmo a memória virtual não está totalmente disponível para um processo do SO. No mínimo, um espaço dele é designado para o SO operar e o restante para o usuário. No bloco do usuário, a memória é dividida em alguns segmentos:
1. Segmento `.text` - contém as instruções do programa;
2. Segmento `.data` - contém dados inicializados, como variáveis globais inicializadas com valores diferentes de 0;
3. Segmento `.bbs` - contém dados não inicializados ou dados inicializados com 0.
> Esses 3 segmentos têm tamanho fixo quando gerados.
4. Segmento **Stack** (ou Pilha) - contém dados de variáveis locais, funções e outros; geralmente tem o tamanho máximo de 8mb. 
5. Segmento **Heap** - inicia depois do `.bbs`, e é quem ocupa mais memória no bloco do usuário, podendo ultrapassar os 2gb. É na **heap** que podemos alocar memória dinamicamente e evitar estourar a pilha com um dado muito grande (evitando o famoso "stack overflow")

Verifique o código em `alocacao-dinamica.c` para conhecer mais sobre as funções e procedimentos de manipulação da memória virtual. 

## 3. PONTEIROS E FUNÇÕES
> Os códigos conterão algumas marcações especiais, como "///" e "@". Isso é um detalhe que não será renderizado no GitHub, mas é muito útil para descrever o comportamento de uma função; então, quando você "documenta" ela dessa forma, ao passar o *mouse* por cima posteriormente, você consegue analisar as mensagens que escreveu e se lembrar de qual o comportamento dela. Fica a dica.

### 3.1 PASSAGEM DE PARÂMETROS
Ao utilizar uma função, nós podemos passar tanto o **valor** quanto a **referência**; na linguagem C, não há maneiras de passar uma referência como parâmetro (como em C++), mas é possível emulá-la. Verifique o código em `parametros.c` para mais detalhes.

### 3.2 VETORES COMO PARÂMETROS
Uma das melhores maneiras de passar vetores para funções é com o uso de ponteiros; vale salientar que, mesmo que não usemos ponteiros, ainda sim é passado o endereço de memória base onde começa o vetor. Verifique `vetor-parametros.c` para uma utilização básica.

### 3.3 RETORNOS MÚLTIPLOS
Se você tem uma função que deseja retornar mais de um valor, é possível usar os ponteiros para fazer com que a função obedeça a esse comportamento. Veja como fazer isso no arquivo `multiplos-retornos.c`. 

## 4. PONTEIRO PARA VOID
Além de todas as utilizações dos ponteiros, ainda podemos declarar um ponteiro do tipo `void`; isso é excepcionalmente útil para casos em que não sabemos o tipo que a variável irá assumir. Logo, podemos criar funções e variáveis genéricas. Verifique `ponteiro-void` para entender o comportamento.
