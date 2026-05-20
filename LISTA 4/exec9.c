#include <stdio.h>

int main() {
    int num;
    int positivos = 0, negativos = 0, zeros = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);

    return 0;
}