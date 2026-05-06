#include <stdio.h>

int main() {
    int i, numero, contador = 0;

    for (i = 0; i < 10; i++) {
        printf("Qual o numero: ");
        scanf("%d", &numero);

        if (numero > 50) {
            contador++;
        }
    }

    printf("Quantidade: %d\n", contador);

    return 0;
}