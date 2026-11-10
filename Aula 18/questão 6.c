#include <stdio.h>

long long calcularFatorial(int numero);

int main(void) {
    int num;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0 || num > 12) {
        printf("\nPor favor, digite um numero entre 0 e 12.\n");
    } else {
        long long fat = calcularFatorial(num);
        printf("\nFatorial de %d = %lld\n", num, fat);
    }

    return 0;
}

long long calcularFatorial(int numero) {
    long long resultado = 1;
    int i;

    for (i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}