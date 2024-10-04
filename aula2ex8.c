
#include <stdio.h>

//Exercicio 8

int main() {
    int num1, num2, resultado;

    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    
    resultado = num1 - num2;

    
    printf("A subtracao de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}
