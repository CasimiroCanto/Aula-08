//Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Cabeçalho da tabela
    printf("A | B | A E B\n");
    printf("-------------\n");

    // Loop para gerar todas as combinações possíveis de A e B (0 e 1)
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            // Calcula o resultado de A E B
            int resultado = A && B;
            
            // Imprime a linha no formato especificado
            printf("%d | %d |   %d\n", A, B, resultado);
        }
    }

    return 0;