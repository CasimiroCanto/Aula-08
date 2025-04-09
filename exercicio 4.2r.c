#include <stdio.h>

int main() {
    float altura, peso, imc;
    
    // Definindo os valores de altura e peso
    altura = 1.64;  // substitua pela sua altura em metros
    peso = 92.0;    // substitua pelo seu peso em kg
    
    // Calculando o IMC
    imc = peso / (altura * altura);
    
    // Imprimindo o resultado
    printf("Seu IMC é: %.2f\n", imc);
    
    return 0;
}