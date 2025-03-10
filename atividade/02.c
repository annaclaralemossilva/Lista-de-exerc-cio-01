/*Crie um programa que solicite um número ao usuário e imprima se ele é positivo, negativo ou zero.*/

#include <stdio.h>

int main(){
    int i;
    printf("Digite um número\n");
    scanf("%d",&i);
    if(i>0){
        printf("É positivo");
    }else if(i<0){
        printf("É negativo");
    }else{
        printf("É zero");
    }return 0;
}