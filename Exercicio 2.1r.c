// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numero, soma_pares = 0;
    
    printf("Bem-vindo ao jogo 'E par?'\n");
    printf("Digite numeros de 1 a 6 (como um dado). O jogo termina quando voce digitar um impar.\n");
    
    while (1) { // Loop infinito (será interrompido com break)
        printf("Digite um numero (1-6): ");
        scanf("%d", &numero);
        
        // Verifica se o número está dentro do intervalo válido
        if (numero < 1 || numero > 6) {
            printf("Numero invalido! Digite apenas numeros de 1 a 6.\n");
            continue;
        }
        
        // Verifica se o número é ímpar
        if (numero % 2 != 0) {
            printf("Numero impar (%d) digitado! Jogo encerrado.\n", numero);
            break; // Sai do loop
        }
        
        // Se chegou aqui, o número é par
        printf("Numero par (%d)! Continue jogando...\n", numero);
        soma_pares += numero; // Adiciona o número à soma
    }
    
    // Mostra o resultado final
    printf("Soma total dos numeros pares digitados: %d\n", soma_pares);
    
    return 0;
}