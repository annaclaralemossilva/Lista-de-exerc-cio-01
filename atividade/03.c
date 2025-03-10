/*Faça um programa que conte de 0 a 20, mas só imprima os números pares.*/

#include <stdio.h>

int main(){
    int n = 0;
    while(n<=20 && n>=0){
        if(n%2==0){
            printf(" %d", n);
        }
        n = n + 1;
    }
    return 0;
}