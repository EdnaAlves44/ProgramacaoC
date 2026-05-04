#include<stdio.h>

int main () {
    printf("Ola, Mundo!\n");

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = numero * 100;

    printf("Você digitou: %d\n", numero);
    printf("Resultado:(x100): %d\n", resultado);

    return 0;
       




}
