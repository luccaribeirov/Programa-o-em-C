
#include <stdio.h>


float maiorPreco(float p1, float p2){
    if (p1 > p2) {
        return p1;
    } else {
        return p2;
    
    }
}


int main(){

float preco1, preco2, maior;

printf("=====Comparador de Preços=====\n");

printf("Qual o primeiro valor?\n");
    scanf("%f", &preco1);
    
printf("Qual o Segundo Valor\n");
    scanf("%f", &preco2);
    
    printf("\n");
    
    
if (preco1 == preco2) {
    printf("Os dois preços tem o mesmo Valor, R$ %.2f\n", preco1);
} else {
    maior = maiorPreco(preco1, preco2);
    
    printf("Maior preço: R$ %.2f\n", maior);
    
}

return 0;

}