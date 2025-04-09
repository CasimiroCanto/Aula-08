// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    // Solicita ao usuário que insira seu peso e altura
    printf("Calculadora de IMC\n");
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    // Calcula o IMC
    imc = peso / (altura * altura);
    
    // Exibe o resultado
    printf("\nSeu IMC é: %.2f\n", imc);
    
    // Classificação do IMC
    printf("\nClassificação:\n");
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade grau I\n");
    } else if (imc < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III (mórbida)\n");
    }
    
    return 0;
}