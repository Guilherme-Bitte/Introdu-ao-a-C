#include <stdio.h>

int main() {
   float orcamento, produto, total = 0;
   int quantidadeProdutos = 0;
   
   printf ("Digite o orcamento: ");
   scanf ("%f", &orcamento);
   
   while (total <= orcamento){
       printf ("Qual o valor do produto: ");
       scanf ("%f", &produto);
       
       if (produto > 0){
           total += produto;
           quantidadeProdutos++;
        
        if (total > orcamento){
            printf ("Orcamento ultrapassado\n");
        }
       }else{
           printf("Valor invalido\n");
       }
       }
       
    printf("Total da compra: %2.f\n", total);
    printf("Produtos validos: %d\n", quantidadeProdutos);
    
    return 0;
}