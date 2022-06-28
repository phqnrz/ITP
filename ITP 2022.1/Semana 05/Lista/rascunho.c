#include <stdio.h>
#include <string.h>

void read_line(char linha[], int tam, FILE *f)
{
    fgets(linha, tam, f);
    while (linha[0] == '\n')
        fgets(linha, tam, f);
    if (linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

void strremove(char str1[], char str2[], char res[])
{
    int x = 0, j = 0, flag = 0, k = 0;
    char remover[50] = {0};

    for (int i = 0; str2[i] != '\0'; i++)
    {
        k = i;
        while (str1[x] == str2[i])
        {
            x++, i++;
            if (x == strlen(str1))
            {
                flag = 1;
                break;
            }
        }
        x = 0;
        if (flag == 0)
            i = k;
        res[j++] = str2[i];
    }
}

void strinsert(char str1[], char str2[], int pos, char res[])
{
    int len1, len2, x = 0;
    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;
    for (int i = 0; i < len1 + len2; i++)
    {
        while (i != pos)
        {
            res[i] = str2[x];
            i++, x++;
        }

        if (i == pos)
        {
            x = 0;
            while (str1[x] != '\0')
            {
                res[i] = str1[x];
                x++, i++;
            }
            x = pos;
            while (str2[x] != '\0')
            {
                res[i] = str2[x];
                x++, i++;
            }
        }
    }
}

int main(void)
{
    char str1[50] = {0}, str2[50] = {0}, res[50] = {0};
    char tipo[50] = {0};
    int pos;
    read_line(tipo, 50, stdin);
    read_line(str1, 50, stdin);
    read_line(str2, 50, stdin);

    if (strcmp(tipo, "strremove") == 0)
    {
        strremove(str1, str2, res);
    }
    else if (strcmp(tipo, "strinsert") == 0)
    {
        scanf("%d", &pos);
        strinsert(str1, str2, pos, res);
    }

    printf("%s\n", res);

    return 0;
}