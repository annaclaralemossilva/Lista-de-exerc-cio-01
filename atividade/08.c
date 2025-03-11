/*Crie um programa que conte de 1 a 100, mas só imprima os números divisíveis por 7.*/

#include <stdio.h>

int main(){
    int n = 0;
    while(n<=100 && n>=0){
        if(n%7==0){
            printf(" %d", n);
        }
        n = n + 1;
    }
    return 0;
}