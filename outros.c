#include <stdio.h>
#include <time.h>

void data(void)
{
    time_t data_atual;
    data_atual = time(NULL);
    struct tm dt = *localtime(&data_atual);
    printf("Data: %d/%d/%d\n", dt.tm_mday, dt.tm_mon + 1, dt.tm_year + 1900);
}