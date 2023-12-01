#include <stdio.h>
#include <string.h>

int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanoParaDecimal(char *numRo) {
    int resultado = 0;
    int tamanho = strlen(numRo);

    for (int i = 0; i < tamanho; i++) {
        int valorAtual = valorRomano(numRo[i]);
        int valorProximo = (i < tamanho - 1) ? valorRomano(numRo[i + 1]) : 0;

        if (valorAtual < valorProximo) {
            resultado -= valorAtual;
        } else {
            resultado += valorAtual;
        }
    }

    return resultado;
}

void imprimirBase(char* numRo, int decimal, int base, const char* nomeBase) {
    printf("%s na base %d: ", numRo, base);

    if (decimal == 0) {
        printf("0");
    } else {
        char resultado[32]; 
        int index = 0;

        while (decimal > 0) {
            int resto = decimal % base;
            resultado[index++] = (resto < 10) ? resto + '0' : resto - 10 + 'a';
            decimal /= base;
        }

        for (int i = index - 1; i >= 0; i--) {
            printf("%c", resultado[i]);
        }
    }

    printf("\n");
}

int main() {
    char numRo[13];
    scanf("%13s", numRo);

    int decimal = romanoParaDecimal(numRo);

    imprimirBase(numRo, decimal, 2, "binário");
    imprimirBase(numRo, decimal, 10, "decimal");
    imprimirBase(numRo, decimal, 16, "hexadecimal");

    return 0;
}
