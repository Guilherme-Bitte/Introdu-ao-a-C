#include <stdio.h>

int main() {
    int numero, soma = 0;

    while (soma <= 100) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;
    }

    printf("A soma ultrapassou 100.\n");
    printf("Soma final: %d\n", soma);

    return 0;
}