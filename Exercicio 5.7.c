#include <stdio.h>

int main() {
    int numeros[4];
    int i, j;

    // Recebe os 4 números do usuário
    printf("Digite 4 números inteiros entre 0 e 10:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
        // Verifica se o número está dentro do intervalo válido
        if (numeros[i] < 0 || numeros[i] > 10) {
            printf("Número inválido! Digite um número entre 0 e 10.\n");
            i--; // Para repetir a leitura deste número
        }
    }

    // Imprime as linhas de asteriscos
    printf("\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}