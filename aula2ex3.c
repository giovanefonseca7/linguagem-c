#include <stdio.h>

//Exercicio 3

int main() {
    int num1, num2, num3; 
    float media;         

    
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

   
    media = (num1 + num2 + num3) / 3.0; 

    
    printf("A media aritmetica entre %d, %d e %d e: %.2f\n", num1, num2, num3, media);
    
    return 0; 
}

