#include <stdio.h>

int main(){
    int idade = 48;
    float altura = 1.59;
    double saldoBancario = 1692345.67;
    char inicial = 'E';
    char nome[20] = "Edna";

    printf("A idade da %s é %d anos\n" , nome, idade);
    printf("A altura é: %.2f metros\n" , altura);
    printf("Saldo bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do nome é: %c\n", inicial);
    printf("Nome: %s\n", nome);
    // sintaxe scanf
    // scanf("formato1" "formato2", &variavel1, &variavel2, ...);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n" , altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    return 0;

    /*
    printf("%formato1 %formato2 %formato3, variavel1 variavel2 variavel3)

    %d:Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    \n: Pular linha.
    */

}



