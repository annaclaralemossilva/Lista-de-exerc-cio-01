/*Faça um programa que conte de 1 a 30, mas pule os números múltiplos de 3.*/
#include <stdio.h>

int main(){
    int n = 1;
    while(n<=30){
        if(n%3!=0){
            printf(" %d", n);
        }
        n= n + 1;
    }
    return 0;
}