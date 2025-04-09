#include <stdio.h>

// Função que retorna o conceito baseado na nota
char obter_conceito(float nota) {
    if (nota >= 9.0 && nota <= 10.0) {
        return 'A';
    } else if (nota >= 8.0 && nota < 9.0) {
        return 'B';
    } else if (nota >= 7.0 && nota < 8.0) {
        return 'C';
    } else if (nota >= 6.0 && nota < 7.0) {
        return 'D';
    } else if (nota >= 0.0 && nota < 6.0) {
        return 'F';
    } else {
        return '?'; // Retorna '?' para notas fora do intervalo válido (0-10)
    }
}

int main() {
    float nota;
    
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);
    
    // Verifica se a nota está dentro do intervalo válido
    if (nota < 0 || nota > 10) {
        printf("Nota inválida! Digite um valor entre 0 e 10.\n");
        return 1; // Retorna código de erro
    }
    
    char conceito = obter_conceito(nota);
    printf("O conceito correspondente à nota %.2f é: %c\n", nota, conceito);
    
    return 0;
}