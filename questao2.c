#include <stdio.h>

int main() {
    int numero, soma = 0;
    scanf("%d", &numero);
     if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }
    int tentativa = numero;
    while (tentativa != 0) {
        soma += tentativa % 10;
        tentativa /= 10;
    }
     printf("A soma dos algarismos de %d eh %d\n", numero, soma);
    return 0;
}