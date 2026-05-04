#include<stdio.h>

int main() {
    float valor;

    printf("Digite um valor (ex:0,60): ");
    scanf("%f", &valor);

    float resultado = valor * 100;

    printf("Voce digitou: %.2f\n", valor);
    printf("Resultado (x100): %.2f\n", resultado);

    return 0;
    







}
