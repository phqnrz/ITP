# include <stdio.h>

int main (void){
    char lixo;
    int vidro, plastico, papel, organico, metal, eletronico;
    vidro = plastico = papel = organico = metal = eletronico = 0;
    int i;

    for (i = 0; i < 10; i++){
        scanf("%c\n", &lixo);
        
        switch (lixo) {
            case 'v':
            case 'V': vidro++; break;
            case 'l':
            case 'L': plastico++; break;
            case 'p':
            case 'P': papel++; break;
            case 'o':
            case 'O': organico++; break;
            case 'm':
            case 'M': metal++; break;
            case 'e':
            case 'E': eletronico++; break;
        }
    }

    printf("Vidro: %d\n", vidro);
    printf("Plastico: %d\n", plastico);
    printf("Papel: %d\n", papel);
    printf("Organico: %d\n", organico);
    printf("Eletronico: %d\n", eletronico);

    return 0;
}