
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int tamanho;
    int i; 
    printf("Digite uma palavra, \nExemplo: Eu gosto de pamonha\n");
    scanf("%s", &palavra);
    
tamanho = strlen(palavra);
    
for (int i = 0; i < tamanho; i++){
    
    printf("%c\n", palavra[i]);

    
}
    return 0;
    
}
