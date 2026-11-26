#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 5


int calcular_pontos(int idade, float pa, int tabagismo, int diabetes, int cardiaca, 
                    float colesterol, float peso, float altura, int sedentarismo, 
                    int alimentacao, int estresse, int sono, int sexo) {
    int pontos = 0;
    
  
    if (idade >= 65) pontos += 3;
    if (pa >= 160) pontos += 3;
    if (tabagismo == 1) pontos += 3;

    if (diabetes == 1) pontos += 2;
    if (cardiaca == 1) pontos += 2;
    if (colesterol >= 160) pontos += 2;
    if (altura > 0 && (peso / (altura * altura)) >= 30) pontos += 2; // IMC >= 30
    
    if (sedentarismo == 1) pontos += 1;
    if (alimentacao == 1) pontos += 1;
    if (estresse == 1) pontos += 1;
    if (sono == 1) pontos += 1;
    if (sexo == 1) pontos += 1;
    
    return pontos;
}


void definir_classificacao(int pontos, char *classificacao) {
    if (pontos <= 4) strcpy(classificacao, "Menor de 10%");
    else if (pontos <= 9) strcpy(classificacao, "Entre 10% e 20%");
    else if (pontos <= 14) strcpy(classificacao, "Entre 20% e 30%");
    else if (pontos <= 18) strcpy(classificacao, "Entre 30% e 50%");
    else strcpy(classificacao, "Acima de 50%");
}

int main() {
    int qtd;
    char nomes[MAX_PACIENTES][50];
    float dados[MAX_PACIENTES][13];
    char classificacoes[MAX_PACIENTES][30];
    
    printf("=========================================\n");
    printf("     SISTEMA DE ANALISE DE RISCO\n");
    printf("=========================================\n\n");

    printf("Quantidade de pacientes (1 a 5): ");
    scanf("%d", &qtd);
    
    if (qtd < 1) qtd = 1;
    if (qtd > MAX_PACIENTES) qtd = MAX_PACIENTES;


    for (int i = 0; i < qtd; i++) {
        printf("\n--- Paciente %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nomes[i]);

        printf("Idade: "); scanf("%f", &dados[i][0]);
        printf("Pressao arterial sistolica (mmHg): "); scanf("%f", &dados[i][1]);
        printf("Tabagismo (1-Sim / 0-Nao): "); scanf("%f", &dados[i][2]);
        printf("Diabetes (1-Sim / 0-Nao): "); scanf("%f", &dados[i][3]);
        printf("Historico de doenca cardiaca (1-Sim / 0-Nao): "); scanf("%f", &dados[i][4]);
        printf("Colesterol LDL (mg/dL): "); scanf("%f", &dados[i][5]);
        printf("Peso (kg): "); scanf("%f", &dados[i][6]);
        printf("Altura (m): "); scanf("%f", &dados[i][7]);
        printf("Sedentarismo (1-Sim / 0-Nao): "); scanf("%f", &dados[i][8]);
        printf("Alimentacao rica em ultraprocessados (1-Sim / 0-Nao): "); scanf("%f", &dados[i][9]);
        printf("Estresse cronico elevado (1-Sim / 0-Nao): "); scanf("%f", &dados[i][10]);
        printf("Sono inadequado (1-Sim / 0-Nao): "); scanf("%f", &dados[i][11]);
        printf("Sexo biologico masculino (1-Sim / 0-Nao): "); scanf("%f", &dados[i][12]);

        int pontos = calcular_pontos(
            (int)dados[i][0], dados[i][1], (int)dados[i][2], (int)dados[i][3],
            (int)dados[i][4], dados[i][5], dados[i][6], dados[i][7],
            (int)dados[i][8], (int)dados[i][9], (int)dados[i][10],
            (int)dados[i][11], (int)dados[i][12]
        );

        definir_classificacao(pontos, classificacoes[i]);
    }

  
printf("\n\n=========================================\n");
    printf("     SISTEMA DE ANALISE DE RISCO\n");
    printf("=========================================\n\n");

printf("Quantidade de Pacientes: %d\n\n", qtd);
 for(int i = 0; i < qtd; i++){
     printf("Paciente %d: %s\n", i + 1, nomes[1]);
 }
 printf("\n=========================================\n");
    printf("         RELATORIO DE RISCO\n");
    printf("=========================================\n\n");
    
    for (int i = 0; i < qtd; i++){
        printf("Paciente: %s\n", nomes[i]);
        printf("Classificação: %s\n\n", classificacoes[i]);
    }
    

    return 0;
}