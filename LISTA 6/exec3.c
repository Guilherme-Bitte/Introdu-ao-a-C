#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior;
    
    printf("Digite o 1º número: ");
    scanf("%d", &numeros[0]); 

    maior = numeros[0];

    for (i = 1; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    printf("\nMaior número: %d\n", maior);
    return 0;
}