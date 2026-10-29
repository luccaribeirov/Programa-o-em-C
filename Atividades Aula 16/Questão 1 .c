/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    
 char nome [100];
 int idade; 
 printf("Qual o seu Nome Completo?");
 
 fgets(nome, sizeof(nome), stdin);
 
 printf("Qual a sua Idade?");
 scanf("%d", &idade);
 
 printf("\nnome: %s", nome);
 printf("idade: %d\n", idade);
 
 return 0; 
}