 # include <stdio.h> 

int main (void) {

int petalas, heroi; 

    scanf("%d %d", &petalas, &heroi);
//Mudando o if para o operador ternário
    if (petalas %2 == 0) {
        printf("Mal me quer! Estalo!\n"); 

        switch (heroi) {
            case 0:
            printf("Iron Man\n");
            break;
            case 1:
            printf("Capitão America\n");
            break;
            case 2:
            printf("Homem-Aranha\n");
            break;
            case 3:
            printf("Viuva Negra\n");
            break;
            case 4: 
            printf("Thor\n");
            break;
            case 5:
            printf("Hulk\n");
            break;
            case 6:
            printf("Dr Estranho\n");
            break;
            case 7:
            printf("Pantera Negra\n");
            break;
            case 8:
            printf("Hawkeye\n");
            break;
            case 9:
            printf("Groot\n");
            break;
            default: printf("Heroi nao existe.\n");
        }

    } else {  
        printf("Bem me quer! #xatiado\n");

    }

    return 0;
}