#include <stdio.h>

//Exercicio 7

int main() {
    float num1, num2, num3, media;

    
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro numero real: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    
    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}
