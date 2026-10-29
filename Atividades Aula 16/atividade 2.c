
#include <stdio.h>

int main(void)
{
    char palavra[100];
    printf("Digite uma palavra, \nExemplo: Eu gosto de pamonha\n");
    scanf("%s", &palavra);
    
    printf("a primeira letra da palavra é: %c\n", palavra[0]);
    
    return 0;
    
}
