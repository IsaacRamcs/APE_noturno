#include <stdio.h>
int main() {
    int cadastro, senha;
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    
    while (1) {
        scanf("%d", &cadastro);
    if (cadastro == senha) {
        printf("senha valida!\n");
        break;
    } else {
        printf("senha invalida!\n");
    }
    }
    return 0;
}