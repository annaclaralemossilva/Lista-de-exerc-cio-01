/*Crie um programa que imprima os números de 10 a 1 em ordem decrescente.*/

#include <stdio.h>

int main(){
    int n = 10;
    while(n<=10 && n>=1){
        printf(" %d", n);
        n = n - 1;
    }
    return 0;
}