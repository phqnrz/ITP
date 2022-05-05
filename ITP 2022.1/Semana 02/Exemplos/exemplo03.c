#include <stdio.h>

int main (void){

    char lixo;
    int vidro, plastico, papel, organicos, metal, eletronicos, i;

    vidro = plastico = papel = organicos = metal = eletronicos = 0;
  
    for (i = 0; i < 10; i++){
        scanf("%c\n", &lixo);

        switch (lixo) {
            case 'v' :
            case 'V' : vidro++;
            break; 

            case 'l' :
            case 'L' : plastico++;
            break;

            case 'p' :
            case 'P' : papel++;
            break;

            case 'o' :
            case 'O' : organicos++;
            break;

            case 'm' :
            case 'M' : metal++;
            break;

            case 'e' :
            case 'E' : eletronicos++;
            break;
        }
    }

    printf("Vidro: %d\n", vidro);
    printf("Plastico: %d\n", plastico);
    printf("Papel: %d\n", papel);
    printf("Organicos: %d\n", organicos);
    printf("Metal: %d\n", metal);
    printf("Eletronicos: %d\n", eletronicos);

    return 0;
}

/* 
    - V (Vidro)
    - L (Plástico)
    - P (Papel)
    - O (Organicos)
    - M (Metal)
    - E (Eletrônicos)
*/