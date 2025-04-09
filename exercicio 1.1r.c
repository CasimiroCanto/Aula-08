// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numero, soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++) {
        if(i % 2 != 0) {  // Verifica se o número é ímpar
            soma += i;    // Adiciona o número ímpar à soma
        }
    }
    
    printf("\nSoma: %d\n", soma);
    
    return 0;
}