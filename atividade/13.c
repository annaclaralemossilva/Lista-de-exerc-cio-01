/*Escreva um programa que solicite dois números e informe se são iguais.*/

#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    if(a==b){
        printf("São iguais!");
    }else{
        printf("São diferentes...");
    }return 0;
}