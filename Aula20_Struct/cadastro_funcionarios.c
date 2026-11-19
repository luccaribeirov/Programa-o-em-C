#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1, funcionario2;
    float diferenca;

    printf("===== CADASTRO DO FUNCIONARIO 1 =====\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\n===== CADASTRO DO FUNCIONARIO 2 =====\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    // Exibicao um embaixo do outro
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Funcionario 1:\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n\n", funcionario1.salario);

    printf("Funcionario 2:\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    printf("\n===== COMPARACAO SALARIAL =====\n");
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("Maior salario: %s (R$ %.2f)\n", funcionario1.nome, funcionario1.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("Maior salario: %s (R$ %.2f)\n", funcionario2.nome, funcionario2.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario (R$ %.2f).\n", funcionario1.salario);
    }

    return 0;
}
