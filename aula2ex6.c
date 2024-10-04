#include <stdio.h>

//Exercicio 6 

int main() {
    int num;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);


    int antecessor = num - 1;
    int sucessor = num + 1;

   
    printf("O antecessor de %d e %d.\n", num, antecessor);
    printf("O sucessor de %d e %d.\n", num, sucessor);

    return 0;
}
