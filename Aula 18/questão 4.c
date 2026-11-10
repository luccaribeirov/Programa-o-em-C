#include <stdio.h>


int dobro(int quantidade);

int main(void) {
    int qtd_inicial, qtd_final;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");
    printf("Quantidade inicial: ");
    scanf("%d", &qtd_inicial);

    qtd_final = dobro(qtd_inicial);

    printf("\nQuantidade inicial: %d\n\n", qtd_inicial);
    printf("Quantidade apos duplicacao: %d\n", qtd_final);

    return 0;
}


int dobro(int quantidade) {
    return quantidade * 2;
}