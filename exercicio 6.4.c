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
    int valores[] = {2, 5, 10, 15, 20};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < tamanho; i++) {
        int resultado = testa_par(valores[i]);
        printf("O número %d é %s\n", valores[i], resultado ? "par" : "ímpar");
    }

    return 0;
}