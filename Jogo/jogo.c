#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, tentativa, totalPartidas = 0, partidasGanhas = 0, tentativasPartida, totalTentativasVitorias;
    char jogarAgain;

    srand(time(NULL)); // Inicializa o gerador de números aleatorios

do{
    int numAleatorio = rand() % 100 + 1; // Gera um número aleatorio
        tentativa = 0;
        tentativasPartida = 0;
    int acerto = 0; // variavel para verificação de acerto

        printf("--------------------------------\n");
        printf("      JOGO DE ADIVINHACAO       \n");
        printf("--------------------------------\n");

    while (tentativa < 10) {
        printf("Digite um numero entre 1 e 100: \n");
            scanf("%d", &n);
            tentativa++;
            tentativasPartida++;

            if(n < numAleatorio){
                printf("O numero e menor que o numero aleatorio.\n");
            } else if (n > numAleatorio) {
                printf("O numero e maior que o numero aleatorio.\n");
            } else {
                printf("Parabens! Voce acertou o numero com %d tentativas!\n", tentativa);
                partidasGanhas++;
                totalTentativasVitorias += tentativasPartida;
                acerto = 1; // adiciona o acerto do jogador
                break;
            }
    }

    if(!acerto) {
        printf("Acabaram suas tentativas! O numero era %d.\n", numAleatorio);
    }

    totalPartidas++;


        printf("\nDeseja jogar novamente? (s/n): ");    // Pergunta se o jogador deseja jogar novamente
        getchar();
        scanf("%c", &jogarAgain);

    } while (jogarAgain == 's' || jogarAgain == 'S');

    
        int x, y;
        char operacao;
        printf("\nDeseja fazer um calculo? (s/n): ");// Oferece ao jogador a opção de fazer um cálculo matemático
        getchar();
        scanf("%c", &operacao);
        if (operacao == 's' || operacao == 'S') {
            printf("Escolha a operacao ( soma = 1, subtração = 2, multiplicação = 3, divisão = 4 ): ");
            getchar();
            scanf("%c", &operacao);
            printf("Digite o primeiro numero: ");
            scanf("%d", &x);
            printf("Digite o segundo numero: ");
            scanf("%d", &y);

            switch (operacao) {
                case '1':
                    printf("Resultado: %d + %d = %d\n", x, y, x + y);// o resultado da soma com o calculo junto
                    break;
                case '2':
                    printf("Resultado: %d - %d = %d\n", x, y, x - y);// o resultado da subtração com o calculo junto
                    break;
                case '3':
                    printf("Resultado: %d * %d = %d\n", x, y, x * y);// o resultado da multiplicação com o calculo junto
                    break;
                case '4':
                    if (y != 0) {
                        printf("Resultado: %d / %d = %.2f\n", x, y, (float)x / y); // o resultado da divisão com o calculo junto
                    } else {
                        printf("Erro: Divisao por zero nao permitida.\n");
                    }
                    break;
                default:
                    printf("Operacao invalida.\n");
                    break;
            }
        }

    printf("\n-----------------------------\n");        // Exibe as estatísticas das partidas jogadas
    printf("       ESTATISTICAS          \n");
    printf("-----------------------------\n");
    printf("Total de partidas jogadas: %d\n", totalPartidas);
    printf("Total de partidas ganhas: %d\n", partidasGanhas);
    if (partidasGanhas > 0) {
        printf("Media de tentativas nas partidas ganhas: %.2f\n", (float)totalTentativasVitorias / partidasGanhas);
    } else {
        printf("Nenhuma partida foi vencida.\n");
    }

    printf("Obrigado por jogar!\n");


    return 0;
}
