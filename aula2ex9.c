#include <stdio.h>

//Exercicio 9

int main() {
    float num, um_quarto;

    
    printf("Digite um numero real: ");
    scanf("%f", &num);

   
    um_quarto = num / 4;

    
    printf("Um quarto de %.2f e: %.2f\n", num, um_quarto);

    return 0;
}
