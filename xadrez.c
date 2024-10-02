#include <stdio.h>
#include <ctype.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movePecas(int casas, char* direcao){
    if (casas > 0)
    {
       printf(" %s\n", direcao);
       movePecas(casas-1, direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int bispoMove = 5;
    const int torreMove = 5;
    const int rainhaMove = 8;
    const int cavaloMove = 2;
    char peca = 'n'; //b = bispo, t = torre, r = rainha, c = cavalo
    int direcao = 0;

    printf("---- XADREZ ----\n\n");

    do{
        printf("[B] Bispo\n");
        printf("[T] Torre\n");
        printf("[R] Rainha\n");
        printf("[C] Cavalo\n");
        printf("Qual peça voce deseja movimentar:");
        scanf(" %c", &peca);
        peca = toupper(peca);

    }while (peca != 'B' && peca != 'T' && peca != 'R' && peca != 'C');
    

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

        if (direcao == 1)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Esquerda\n");

                for (int j = 0; j < 1; j++){
                    printf("Cima\n");
                }
                
            }
            
        }else if (direcao == 2)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Direita\n");
                for (int j = 0; j < 1; j++){
                    printf("Cima\n");
                }
                
            }
        }
        else if (direcao == 3)
        {
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Esquerda\n");
                for (int j = 0; j < 1; j++){
                    printf("Baixo\n");
                }
                
            }
        }else{
            for (int i = 0; i < bispoMove; i++)
            {
                printf("Esquerda\n");
                for (int j = 0; j < 1; j++){
                    printf("Cima\n");
                }
                
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

        if (direcao == 1)
        {
            movePecas(torreMove,"Esquerda");
            
        }else if (direcao == 2)
        {
        movePecas(torreMove,"Direita");
        }
        else if (direcao == 3)
        {
            movePecas(torreMove,"Cima");
        }else{

            movePecas(torreMove,"Baixo");
        }
    }else if(peca == 'R')
    {
        do{
            printf(" \n--- DIRECÕES --- \n");
            printf("[1] Esquerda\n");
            printf("[2] Direita\n");
            printf("[3] Cima\n");
            printf("[4] Baixo\n");

            printf("Para qual direção voce deseja movimentar a RAINHA:");

            scanf("%d", &direcao);


        }while (direcao < 1 && direcao > 4);

        if (direcao == 1)
        {
        movePecas(rainhaMove,"Esquerda");
            
        }else if (direcao == 2)
        {
            movePecas(rainhaMove,"Direita");
        }
        else if (direcao == 2)
        {
            movePecas(rainhaMove,"Cima");
        }else{
            movePecas(rainhaMove,"Baixo");
        }
    }else{
       do{
            printf(" \n--- DIRECÕES --- \n");
            printf("[1] Superior Esquerdo\n");
            printf("[2] Superior Direito\n");
            printf("[3] Inferior Esquerdo\n");
            printf("[4] Inferior Direito\n");

            printf("Para qual direção voce deseja movimentar o CAVALO:");

            scanf("%d", &direcao);

        }while (direcao < 1 && direcao > 4);

        if (direcao == 1)
        {


            for (int i = 0,j = 0; i < cavaloMove; i++, j++)
            {
                while (j < 1)
                {
                    printf("Esquerda\n");
                    j++;
                }
                printf("Cima\n");
            }

        }else if (direcao == 1)
        {
             for (int i = 0,j = 0; i < cavaloMove; i++,j++)
            {
                while (j < 2)
                {
                    printf("Direita\n");
                    j++;
                }
                printf("Cima\n");
            }
        }
        else if (direcao == 3)
        {
             for (int i = 0,j = 0; i < cavaloMove; i++, j++)
            {
                while (j < 1)
                {
                    printf("Esquerda\n");

                    j++;
                }
                printf("Baixo\n");
            }
        }else{
             for (int i = 0,j = 0; i < cavaloMove; i++, j++)
            {
                while (j < 1)
                {
                    printf("Direita\n");
                    j++;
                }
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
