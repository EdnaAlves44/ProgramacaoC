#include <stdio.h>

int main () {
    int numero;


    printf("Digite um numero inteiro:  ");
    scanf("%d", &numero);

    int resultado = numero * 100;

    printf("Voce digitou: %d\n", numero);
    printf("Resultado:(x100): %d\n", resultado);

    return 0;




}