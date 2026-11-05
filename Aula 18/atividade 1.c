
#include <stdio.h>

void exibirMenu ()
{
printf(" ===== CALCULADORA =====\n");
printf("1 - Soma\n");
printf("2 - Subtração\n");
printf("3 - Multiplicação\n");
printf("4 - Dividir\n");
printf("0 - Sair\n");
}

    float somar(float a, float b) {
        return a + b;
    }
    
    float subtrair(float a, float b){
        return a - b;
    }
    
    float multiplicar(float a, float b ){
        return a * b;
    }
    
    float dividir(float a, float b){
       if (b == 0 ){
       printf("ERRO, DIVISÃO POR 0 NÃO AUTORIZADA");
       return 0;
       }
       return a / b;
    }
    
int main(){
    int opcao;
    float num1, num2, resultado;
    
    do{ 
        exibirMenu();
        
        printf("Escolha uma opção");
        scanf(" %d", &opcao);
    if (opcao == 0) {
        printf("Saindo da Calculadora...");
        break;
    }
    
    if (opcao >= 1 && opcao <= 4){
        printf("\n Primeiro Numero:");
        scanf("%f", &num1);
        printf("\n Segundo Numero:");
        scanf("%f", &num2);
    }

switch (opcao){
    
    case 1:
    resultado = somar(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    break;
    
    case 2: 
    resultado = subtrair(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    break;
    
    case 3:
    resultado = multiplicar(num1, num2);
    printf("Resultado: %.2f\n", resultado);
    break;
    
    case 4:
    if (num2 != 0){
    resultado = dividir(num1, num2);
    printf("Resultado %.2f\n", resultado);
} else {
    dividir(num1, num2);
}
break;

default:
        printf("Opção invalida, Tente novamente\n");
}
    
    }while (opcao != 0);

return 0;
}
    
    
    
    
    
    
    
    
    