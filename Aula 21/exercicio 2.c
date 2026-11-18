#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int numero;

arquivo =fopen("numeros.txt", "w");
if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo para escrita!\n");
    return 1;
    }

printf("Digite 5 Numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d:", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }
    fclose(arquivo);
    arquivo = fopen("numeros.txt", "r");
        if(arquivo == NULL) {
            printf("Erro ao abrir o arquivo para Leitura!\n");
            return 1;
        }
    printf("\nNumeros armazenados no arquivo numeros.txt:\n");
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }
    fclose(arquivo);
    return 0;
}