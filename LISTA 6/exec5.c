#include <stdio.h>
int main() {
    int numeros[6];
    int pos;
    float soma = 0, media;
    for (pos = 0; pos < 6; pos++){
        printf("Digite o número da posição %d: ", pos);
        scanf("%d", &numeros[pos]);
        soma += numeros[pos];
    }
    media = soma / 6;
    printf("A média é igual a %.2f\n ", media);
    return 0;
}