#include <stdio.h>

int main(void) {
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25;

    printf("O tempo vitorioso foi de %.2f do corredor %c\n", tempo, corrida);
    printf("O melhor tempo do evento %d foi do corredor %c\n", evento, corrida);

    return 1;
}

