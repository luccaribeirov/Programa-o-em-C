
#include <stdio.h>


int verificarPar(int numero){
if (numero % 2 == 0 ){
    return 1;
} else { 
    return 0;
    }
}


int main (){
    int num, resultado;
    
    printf("=====Verificador De Numeros=====\n\n");
    
    printf("Digite um Numero:\n");
    scanf("%d", &num);
    
    printf("\n");
    
    resultado = verificarPar (num);
    
if (resultado == 1){
    printf("o numero %d é par.\n", num);
} else {
    printf("o numero %d é impar\n", num);
}
return 0;
}