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

    int main (){

    int i ;             //Variável dos Loops
    int movimento;      //Complemento da variável nos Loops

    printf("# # # === Xadrez  -  Movimento das Peças === # # #\n");
    printf("\n");


    // TORRE - Usando o ' FOR '
    printf("== Movimentando a TORRE - 5 Casas para a Direita ==\n");
    
    for (i = 1; i<=5; i++)
    {
        printf("Casa %d - Direita \n", i);
    }

    printf("\n");

    // BISPO - Usando o ' WHILE '
    printf("== Movimentando o BISPO - 5 Casas para Diagonal (Cima e DIreita) ==\n");

    movimento = 1;
    while (movimento <= 5)
    {
        printf("Casa %d - Cima, Direita \n", movimento);
        movimento++;
    }
    
    printf("\n");

    // RAINHA - Usando o ' Do While '
    printf("== Movimentando a RAINHA - 8 Casas para Esquerda ==\n");

    movimento = 1;
    do
    {
        printf("Casa %d - Esquerda\n", movimento);
        movimento++;
    } while (movimento <= 8);
    
    printf("\n");

    // CAVALO - Loop Aninhado, Usando o ' For com o While '
    printf("== Movimentando o CAVALO - 2 Casas para Baixo e 1 para Esquerda ==\n");

    //Andando 2 casas para baixo
    for (i = 1; i <= 2; i++)
    {
        printf("Casa %d - Baixo \n", i);
    } 
    
    //Acrescentando o While no For (Andando 1 casa para esquerda)
    movimento = 1;
    while (movimento <= 1) 
    {
        printf("Casa %d - Esquerda \n", movimento + 2); //Pois Já andou 2 casas para baixo
        movimento++;
    }

    printf("\n");
    printf("== Fim da Simulação dos Movimentos das Peças ==\n");

    return 0 ;
}