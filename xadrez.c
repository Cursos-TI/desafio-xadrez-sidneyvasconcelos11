#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    
    // Função recursiva para a TORRE
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    moverTorre(casas - 1);
    printf("Casa %d: Direita\n", casas);
}

//---------------------------------------------------------------------------------------

// Função recursiva + Loops aninhados para o BISPO
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return; // caso base

    // Loop externo para o movimento vertical
    for (int i = 1; i <= vertical; i++) {
        
        // Loop interno para o movimento horizontal
        for (int j = 1; j <= horizontal; j++) {
            printf("Casa (%d,%d): Cima, Direita\n", i, j);
        }
    }

    // Chamada recursiva reduzindo o tamanho do movimento
    moverBispo(vertical - 1, horizontal - 1);
}

//---------------------------------------------------------------------------------------

// Função recursiva para a RAINHA
void moverRainha(int casas){
    if (casas == 0) return; // caso base
    moverRainha(casas - 1);
    printf("Casa %d: Esquerda\n", casas);
}

//---------------------------------------------------------------------------------------

// Função para o CAVALO (Loops complexos) - Movimento: 2 casas para cima e 1 para a direita
void moverCavalo() {
    
    int movimentos = 0;
    for (int i = 1, j = 2; i <= 2 && j >= 1; i++, j--) {
        if (i == j) {
            continue; // caso especial: pular movimento redundante
        }

        printf("Casa %d: Cima\n", i);
        movimentos++;

        if (movimentos == 2) {
            printf("Casa %d: Direita\n", movimentos + 1);
            break; // encerra ao completar o movimento em "L"
        }
    }
}

//---------------------------------------------------------------------------------------

// Função principal
int main (){

    printf("# # # === Xadrez  -  Movimento das Peças com Recursividade e Loops Complexos === # # #\n\n");

    // Torre
    printf("== Movimentando a TORRE - 5 Casas para a Direita ==\n");
    moverTorre(5);
    printf("\n");

    // Bispo
    printf("== Movimentando o BISPO - 5 Casas na Diagonal (Cima e DIreita) ==\n");
    moverBispo(1, 5);
    printf("\n");

    // Rainha
    printf("== Movimentando a RAINHA - 8 Casas para Esquerda ==\n");
    moverRainha(8);
    printf("\n");

    // Cavalo
    printf("== Movimentando o CAVALO - 2 Casas para Cima e 1 para Direita ==\n");
    moverCavalo();

     printf("\n");
    printf("== Fim da Simulação dos Movimentos das Peças ==\n");

    return 0 ;
}