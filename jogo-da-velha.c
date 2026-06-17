#ifndef FUNCTIONS_JOGO_DA_VELHA_H
#define FUNCTIONS_JOGO_DA_VELHA_H

void inicializar_tabuleiro(char tabuleiro[3][3]);
void mostrar_tabuleiro(char tabuleiro[3][3]);
int jogada_valida(char tabuleiro[3][3], int linha, int coluna);
void jogada_aleatoria(char tabuleiro[3][3], int *linha, int *coluna);
int verificar_vencedor(char tabuleiro[3][3], char jogador);
int tabuleiro_cheio(char tabuleiro[3][3]);

#endif