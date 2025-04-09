// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numeros[4];
    int i, j;
    
    printf("Digite 4 números inteiros entre 0 e 10: ");
    scanf("%d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}