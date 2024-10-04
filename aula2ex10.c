#include <stdio.h>

//Exercicio 10

int main() {
    char nome[100];
    char endereco[200];
    char telefone[15];

    
    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

   
    printf("Digite o endereço do cliente: ");
    fgets(endereco, sizeof(endereco), stdin);

    
    printf("Digite o telefone do cliente: ");
    fgets(telefone, sizeof(telefone), stdin);

   
    printf("\nDados do Cliente:\n");
    printf("Nome: %s", nome);
    printf("Endereço: %s", endereco);
    printf("Telefone: %s", telefone);

    return 0;
}
