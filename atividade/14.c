/*Crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário.*/

#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int r;
    printf("Digite um número e descubra a tabuada dele: ");
    scanf(" %d", &n);
    while(i<=10){
        r = n * i;
        printf(" %d x %d = %d\n", n, i, r);
        i = i + 1;
    }
    return 0;
}