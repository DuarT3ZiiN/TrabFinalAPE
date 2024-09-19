#include <stdio.h>
#include <stdlib.h>
#include <time.h.>

int main(){
    int n, tentativa;
    srand(time(NULL));

    int numero_aleatorio = rand() % 100 + 1;

    printf("--------------------------------");
    printf("      JOGO DE ADIVINHACAO       ");
    printf("--------------------------------");

    printf("Digite um numero entre 1 e 100:");

    if(tentativa >= 0 && tentativa <= 10){

        do{
            scanf("%d", &n);
            if(n < numero_aleatorio){
                printf("O numero e menor que o numero aleatorio.");
            } else {
                printf("O numero e maior que o numero aleatorio.");
            }
        } while(n =! numero_aleatorio);
    } else {
        printf("Acabou suas tentativas!");
    }   

    return 0;
}