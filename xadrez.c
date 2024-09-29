#include <stdio.h>
#include <ctype.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int bispoMove = 5;
    const int torreMove = 5;
    const int rainhaMove = 8;
    char peca = 'n'; //b = bispo, t = torre, r = rainha
    int direcao = 0;

    printf("---- XADREZ ----\n\n");

    do{
        printf("[B] Bispo\n");
        printf("[T] Torre\n");
        printf("[R] Rainha\n");
        printf("Qual peça voce deseja movimentar:");
        scanf(" %c", &peca);
        peca = toupper(peca);

    }while (peca != 'B' && peca != 'T' && peca != 'R');
    

    if (peca == 'B')
    {
        do{

            printf(" \n--- DIRECÕES ---\n");
            printf("[1] Diagonal superior esquerda\n");
            printf("[2] Diagonal superior direita\n");
            printf("[3] Diagonal inferior direita\n");
            printf("[4] Diagonal inferior esquerda\n");

            printf("Para qual direção voce deseja movimentar o BISPO:");
            scanf("%d", &direcao);

        }while (direcao < 1 && direcao > 4);

        if (direcao = 1)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Esquerda\n");
                printf("Cima\n");
            }
            
        }else if (direcao = 2)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Direita\n");
                printf("Cima\n");
            }
        }
        else if (direcao = 2)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Direita\n");
                printf("Baixo\n");
            }
        }else{
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Esquerda\n");
                printf("Baixo\n");
            }
        }
        
        
    }else if (peca == 'T')
    {
        do{
            printf(" \n--- DIRECÕES ---\n");
            printf("[1] Esquerda\n");
            printf("[2] Direita\n");
            printf("[3] Cima\n");
            printf("[4] Baixo\n");

            printf("Para qual direção voce deseja movimentar a TORRE: ");

            scanf("%d", &direcao);

        }while (direcao < 1 && direcao > 4);

        if (direcao = 1)
        {
            for (int i = 0; i < torreMove; i++)
            {
                printf("Esquerda\n");
            }
            
        }else if (direcao = 2)
        {
            for (int i = 0; i < torreMove; i++)
            {
                printf("Direita\n");
            }
        }
        else if (direcao = 2)
        {
            for (int i = 0; i < torreMove; i++)
            {
                printf("Cima\n");
            }
        }else{
            for (int i = 0; i < torreMove; i++)
            {
                printf("Baixo\n");
            }
        }
    }else{
        do{
            printf(" \n--- DIRECÕES --- \n");
            printf("[1] Esquerda\n");
            printf("[2] Direita\n");
            printf("[3] Cima\n");
            printf("[4] Baixo\n");

            printf("Para qual direção voce deseja movimentar a RAINHA:");

            scanf("%d", &direcao);

        }while (direcao < 1 && direcao > 4);

        if (direcao = 1)
        {
            for (int i = 0; i < rainhaMove; i++)
            {
                printf("Esquerda\n");
            }
            
        }else if (direcao = 2)
        {
            for (int i = 0; i < rainhaMove; i++)
            {
                printf("Direita\n");
            }
        }
        else if (direcao = 2)
        {
            for (int i = 0; i < rainhaMove; i++)
            {
                printf("Cima\n");
            }
        }else{
            for (int i = 0; i < rainhaMove; i++)
            {
                printf("Baixo\n");
            }
        }
    }
   
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
