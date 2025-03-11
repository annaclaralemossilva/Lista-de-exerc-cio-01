/*Faça um programa que peça dois números ao usuário e imprima o maior deles.*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("digite o primeiro número: ");
    scanf(" %d", &num1);
    printf("digite o segundo número: ");
    scanf(" %d", &num2);
    if(num1>num2){
        printf("O maior é %d", num1);
    }else if(num1<num2){
        printf("O maior é %d", num2);
    }else{
        printf("São iguais");
    }
    return 0;
}