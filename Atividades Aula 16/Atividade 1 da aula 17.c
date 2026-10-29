
#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50];
    char perfil[50];
  printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Qual o seu nome?\n");
    scanf("%49s", nome);

    printf("Qual o seu Perfil?\n");
    scanf("%49s", perfil);

    printf("===== SEJA BEM VINDO =====\n\n");

    printf("Nome:%s\n", nome);

    printf("Quantidade de Caracteres:%zu\n", strlen(nome));

    if (strcmp(perfil, "Admin") == 0) {
        printf("Perfil: ADMIN"); }
    else {
        printf("Perfil: Comum\n");
    }

    printf("Bem Vindo(a), %s\n", nome);

    printf(" Cadastro realizado com Sucesso!");

    return 0;
}




