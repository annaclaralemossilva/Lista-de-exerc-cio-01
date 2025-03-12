/*Crie um programa que peça um número ao usuário e imprima se é ímpar ou par.*/
#include <stdio.h>

int main(){
    int i;
    printf("Digite um número: ");
    scanf("%d", &i);
    if (i%2== 0){
        printf("É par!");
    }else{
        printf("É ímpar!");
    }return 0;
}