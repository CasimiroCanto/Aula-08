// Online C compiler to run C program online
#include <stdio.h>

// Função que testa se um número é par
int testa_par(int numero) {
    if (numero % 2 == 0) {
        return 1; // É par
    } else {
        return 0; // É ímpar
    }
}

int main() {
    // Testando a função com alguns valores
    printf("4 é par? %d\n", testa_par(4));
    printf("5 é par? %d\n", testa_par(5));
    printf("0 é par? %d\n", testa_par(0));
    printf("7 é par? %d\n", testa_par(7));
    printf("-2 é par? %d\n", testa_par(-2));
    
    return 0;
}