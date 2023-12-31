#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char dia_semana[30];
    char placa[10];

    scanf("%s", placa);
    scanf("%s", dia_semana);

    for (int i = 4; i <= 7; i++) {
        for (int j = 0; j <= 3; j++) {
        if ((strlen(placa) == 8 && placa[3] == '-' && isalpha(placa[j]) && isdigit(placa[i]))
        || 
        (strlen(placa) == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) 
        && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) 
        && isdigit(placa[6]))) {

            char ultimo = placa[strlen (placa)-1];
            
        if (strcmp(dia_semana, "SEGUNDA-FEIRA") == 0) {
            if (ultimo == '0' || ultimo == '1') {
                printf("%s nao pode circular segunda-feira\n", placa);
            } else {
                printf("%s pode circular segunda-feira\n", placa);
            }
        } else if (strcmp(dia_semana, "TERCA-FEIRA") == 0) {
            if (ultimo == '2' || ultimo == '3') {
                printf("%s nao pode circular terca-feira\n", placa);
            } else {
                printf("%s pode circular terca-feira\n", placa);
            }
        } else if (strcmp(dia_semana, "QUARTA-FEIRA") == 0) {
            if (ultimo == '4' || ultimo == '5') {
                printf("%s nao pode circular quarta-feira\n", placa);
            } else {
                printf("%s pode circular quarta-feira\n", placa);
            }
        } else if (strcmp(dia_semana, "QUINTA-FEIRA") == 0) {
            if (ultimo == '6' || ultimo == '7') {
                printf("%s nao pode circular quinta-feira\n", placa);
            } else {
                printf("%s pode circular quinta-feira\n", placa);
            }
        } else if (strcmp(dia_semana, "SEXTA-FEIRA") == 0) {
            if (ultimo == '8' || ultimo == '9') {
                printf("%s nao pode circular sexta-feira\n", placa);
            } else {
                printf("%s pode circular sexta-feira\n", placa);
            }
        } else if (strcmp(dia_semana, "SABADO") == 0 || strcmp(dia_semana, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } 
        else {
            printf("Dia da semana invalido\n");

        }
    } else {
        printf("Placa invalida\n");
        if( strcmp(dia_semana,"SEGUNDA-FEIRA" ) != 0 &&
        strcmp(dia_semana,"TERCA-FEIRA" ) != 0 &&
        strcmp(dia_semana,"QUARTA-FEIRA" ) != 0 &&
        strcmp(dia_semana,"QUINTA-FEIRA" ) != 0 &&
        strcmp(dia_semana,"SEXTA-FEIRA" ) != 0 &&
        strcmp(dia_semana,"SABADO" ) != 0 &&
        strcmp(dia_semana,"DOMINGO" ) != 0 
        ) {
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}
    
        }
    }
