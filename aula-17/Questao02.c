#include <stdio.h>
#include <string.h>

int main(void) {
char produto[50];
char categoria[20];
char produtoCopia[50];
char descricao[50];

printf("===== CADASTRO DE PRODUTOS =====\n\n");
printf("Nome do Produto:\n");
scanf("%49s", produto);
printf("Categoria:\n");
scanf("%19s", categoria);

strcpy(produtoCopia, produto);
strcpy(descricao, produtoCopia);

printf("\n===== RESUMO =====\n");
printf("Produto: %s\n", produtoCopia);
printf("Caracteres: %zu\n", strlen(produto));

if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Outra\n");
    }

printf("Descrição: %s\n", descricao);
printf("Cadastro Concluido!\n");

return 0;
}