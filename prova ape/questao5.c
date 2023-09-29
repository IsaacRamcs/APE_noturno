#include <stdio.h>
int main() {
    int valor1, valor2;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    if (valor1 == valor2) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior, menor;
        if (valor1 > valor2) {
            maior = valor1;
            menor = valor2;
        } else {
            maior = valor2;
            menor = valor1;
        }

        printf("%d eh maior que %d\n", maior, menor);
        
        if (menor != 0 && maior % menor == 0) {
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }

    return 0;
}
