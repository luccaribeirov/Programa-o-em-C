#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNC 5

typedef struct {
    char nome[100];
    int matricula;
} Funcionario;

int main() {
    Funcionario func[MAX_FUNC];
    FILE *arquivo;
    int i;

  
    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravacao!\n");
        return 1;
    }

    printf("=== Cadastro de Funcionarios (Ate 5) ===\n");

    for (i = 0; i < MAX_FUNC; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);


        printf("Digite a matricula (numero): ");
        scanf("%d", &func[i].matricula);


        int c;
        while ((c = getchar()) != '\n' && c != EOF);


        printf("Digite o nome: ");
        if (fgets(func[i].nome, sizeof(func[i].nome), stdin) != NULL) {
          
            size_t len = strlen(func[i].nome);
            if (len > 0 && func[i].nome[len - 1] == '\n') {
                func[i].nome[len - 1] = '\0';
            }
        }

  
        fprintf(arquivo, "Nome: %s | Matricula: %d\n", func[i].nome, func[i].matricula);
    }


    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo 'funcionarios.txt'!\n");
    return 0;
}