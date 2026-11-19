#include <stdio.h>
#include <string.h>

int main(void) {
char nome[50];
char perfil[20];
char nomeConfirmacao[50];
char mensagem[100] = "Bem-Vindo(a),";

printf("===== CADASTRO DE USUARIOS =====\n\n");

printf("Digite seu nome:");
scanf("%49s[^]", nome);
printf("Digite o seu Perfil:");
scanf(" %19s[^]", perfil);

strcpy(nomeConfirmacao, nome);
strcat(mensagem, nomeConfirmacao);
strcat(mensagem, "!");

printf("\n===== DADOS CADASTRADOS =====\n");
printf("nome: %s\n",nomeConfirmacao);
printf("Quantidade de caracteres: %zu\n", strlen(nome));

if (strcmp(perfil, "admin") == 0){
    printf("Perfil: Administrador\n");
} else if (strcmp(perfil, "comum") == 0){
    printf("Pefil: Comum\n");
} else {
    printf("Perfil: Desconhecido\n");
}

printf("\n%s\n", mensagem);
printf("Cadastro realizado com sucesso.\n");

return 0;
}