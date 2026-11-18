#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int quantidade;
    int caractere;

    do {
        printf("\n===== SISTEMA DE FUNCIONARIOS =====\n");
        printf("1 - Cadastrar funcionarios (ate 5)\n");
        printf("2 - Visualizar funcionarios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            return 1;
        }

        if (opcao == 1) {
            printf("\nQuantos funcionarios deseja cadastrar (1 a 5)? ");
            scanf("%d", &quantidade);

            if (quantidade < 1 || quantidade > 5) {
                printf("Quantidade invalida! Informe de 1 a 5 funcionarios.\n");
                continue;
            }

            arquivo = fopen("funcionarios.txt", "a");
            if (arquivo == NULL) {
                perror("Erro ao abrir arquivo");
                continue;
            }

            for (int i = 0; i < quantidade; i++) {
                printf("\n--- CADASTRO DE FUNCIONARIO %d ---\n", i + 1);
                
                printf("Nome: ");
                scanf(" %49[^\n]", f.nome);

                printf("Salario: ");
                scanf("%f", &f.salario);

                printf("Horas extras: ");
                scanf("%d", &f.horasExtras);

                fprintf(arquivo, "\n==============================\n");
                fprintf(arquivo, "FUNCIONARIO: %s\n", f.nome);
                fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
                fprintf(arquivo, "Horas extras: %d\n", f.horasExtras);
                fprintf(arquivo, "==============================\n");
            }

            if (fclose(arquivo) != 0) {
                perror("Erro ao salvar os dados");
            } else {
                printf("\nFuncionario(s) cadastrado(s) com sucesso!\n");
                printf("Dados salvos em funcionarios.txt\n");
            }
        }
        else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");
            if (arquivo == NULL) {
                printf("\nNenhum funcionario cadastrado.\n");
                continue;
            }

            printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
            while ((caractere = fgetc(arquivo)) != EOF) {
                putchar(caractere);
            }

            fclose(arquivo);
        }
        else if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
        }
        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}