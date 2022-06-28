#include <stdio.h>
#include <string.h>

int main()
{
    int mat[10][10];

    memset(mat, 0, sizeof(mat));
    // memset(mat, 1, sizeof(mat));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}