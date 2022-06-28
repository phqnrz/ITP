#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int voo(int num, int voos[num][num], int o, int d)
{
}

int main(void)
{
    int num;
    char **cities;
    int o, d;

    scanf("%d", &num);

    cities = malloc(sizeof(char) * num);
    int voos[num][num];

    for (int i = 0; i < num; i++)
    {
        fgetc(stdin);
        fgets(cities[i], 30, stdin);
        cities[i][strcspn(cities[i], "\n")] = 0;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &voos[i][j]);
        }
    }

    scanf("%d %d", &o, &d);

    free(*cities);

    return 0;
}