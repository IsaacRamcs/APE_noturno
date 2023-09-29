#include <stdio.h>
int main () {
 char letra;
 float salario, aumento, salario_aumentado;
 scanf(" %c", &letra);
 scanf("%f", &salario);
 switch (letra) {
    case 'a' :
    aumento = 0.05 * salario;
    break;
    case 'b' :
    aumento = 0.07 * salario;
    break;
    case 'c' :
    aumento = 0.08 * salario;
    break;
 }
 salario_aumentado = salario + aumento;
 printf("R$ %.2f\n", salario_aumentado);
 return 0;
}