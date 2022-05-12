#include <stdio.h>

int main (void) {
     char mapa[6][6];
     char comandos;
     int movimento, x, y, i, j;
     int fora = 0, detectado = 0;

     for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            scanf(" %c", &mapa[i][j]);
        }
     }
    
     scanf("%d", &movimento);
     scanf("%d %d", &x, &y);
     x--;
     y--;

     for(i = 0; i < movimento; i++) {
        scanf(" %c", &comandos);

        switch (comandos) {
            case 'D': y++; break;
            case 'E': y--; break;
            case 'C': x--; break;
            case 'B': x++; break;
        }

        if(x < 0 || y < 0 || x >= 6 || y >= 6) {
            fora = 1;
            break;
        } else {
            if (x > 0 && mapa[x-1][y] == 'V') {
                detectado = 1;
            } else if (x < 5 && mapa[x+1][y] == '^') {
                detectado = 1;
            } else if (y > 0 && mapa[x][y-1] == '>'){
                detectado = 1;
            } else if (y < 5 && mapa[x][y+1] == '<') {
                detectado = 1;
            }

        }
     }
    
    if (fora){
        printf("Movimento invalido!");
    } else if (detectado) {
        printf("Freeze!");
    } else {
        printf("Like a Ninja...");
    }

    return 0;
}