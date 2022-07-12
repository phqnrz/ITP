#include <stdio.h>
#include <string.h>
#define nl 10
#define nc 20

void exibeTabuleiro(char tab[nl][nc])
{
    printf("    1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20\n");
    for (int l = 0; l < nl; l++)
    {
        printf("%2d ", l + 1);
        for (int c = 0; c < nc; c++)
            if (tab[l][c] == -1)
                printf("[ ]");
            else if (tab[l][c] == 0)
                printf("   ");
            else if (tab[l][c] < 9)
                printf(" %d ", tab[l][c]);
            else
                printf(" %c ", tab[l][c]);
        printf("\n");
    }
}

int main(void)
{
    char tabuleiro[nl][nc];
    int l = 0, c, v;
    // Inicializa tabuleiro com -1 (não revelado)
    memset(tabuleiro, -1, nl * nc);
    // Ler posições de jogada
    while (l != -1)
    {
        exibeTabuleiro(tabuleiro);
        printf("Entre: linha (-1 sai) coluna valor\n");
        scanf("%d %d %d", &l, &c, &v);
        if (l >= 0 && l < nl && c >= 0 && c < nc)
            tabuleiro[l - 1][c - 1] = v;
    }
    return 0;
}