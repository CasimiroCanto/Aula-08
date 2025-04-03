// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A;
    
    printf("Tabela Verdade do Operador NÃO\n");
    printf("A: 0  ! 0 = 1\n");
    
    for (A = 0; A <= 1; A++) {
        printf("A: %d  ! %d = %d\n", A, A, !A);
    }
    
    return 0;
}