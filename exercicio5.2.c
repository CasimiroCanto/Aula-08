// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Variáveis A e B para a tabela verdade
    int A, B;
    
    printf("Tabela Verdade do Operador E (&&)\n");
    printf("A: 0 B: 0  0 && 0 = 0\n"); // Linha inicial conforme exemplo
    
    // Loop para gerar todas as combinações possíveis de A e B (0 e 1)
    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            // Pula a primeira linha que já foi impressa
            if (A == 0 && B == 0) continue;
            
            printf("A: %d B: %d  %d && %d = %d\n", A, B, A, B, A && B);
        }
    }
    
    return 0;
}