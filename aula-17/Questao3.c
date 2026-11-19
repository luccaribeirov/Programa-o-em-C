#include <stdio.h>
#include <string.h>

int main(void) {
    // Etapa 2: Declaração das variáveis
    char nome[50];
    char nomeCopia[50];
    char codigo[10];
    char mensagem[80] = "Ola, ";

    // Etapa 3: Entrada de dados
    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso: ");
    scanf("%9s", codigo);

    // Etapa 4: Cópia e montagem da saudação
    strcpy(nomeCopia, nome);
    strcat(mensagem, nomeCopia);
    strcat(mensagem, "!");

    // Etapa 5: Exibição do resultado
    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nomeCopia);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Codigo invalido\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s\n", mensagem);

    return 0;
}
