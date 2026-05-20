#include <stdio.h>
int main() {
    int numeros [8];
    int pos, soma = 0;
    
    for (pos = 0; pos < 8; pos ++){
        printf("Digite o numero: ");
        scanf ("%d", &numeros[pos]);
    }
    for (pos = 0; pos < 8; pos++){
        soma += numeros[pos];
    }
    printf("Soma = %d\n", soma);
    return 0;
}