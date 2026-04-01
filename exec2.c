#include <stdio.h>

int main() {
    float valor ;
    printf ("Qual o valor da compra: ");
    scanf ("%f" , &valor);
    
    if (valor >= 100){
        printf("Desconto");
    }
    else{
        printf ("Sem desconto");
    }
    return 0;
}
