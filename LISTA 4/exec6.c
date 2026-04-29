#include <stdio.h>

int main() {
    int senha;
    printf ("Informe a senha: \n");
    scanf ("%d", &senha);
    while (senha != 1234) {
        printf ("Insira a senha novamente: \n");
        scanf ("%d", &senha);
    }
    printf ("Login completo");
    return 0;
}