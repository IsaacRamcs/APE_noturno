#include <stdio.h>
#include <math.h>

int main() {
    int meses;
    double valor, retorno;
    double montante = 0.0;

    scanf("%d", &meses);
    scanf("%lf", &valor);
    scanf("%lf", &retorno);
   
    for (int i = 1; i <= meses; i++) {
        montante = valor * (1 + retorno);
        montante *= (pow((1 + retorno), i) - 1) / retorno;

        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }

    return 0;
}