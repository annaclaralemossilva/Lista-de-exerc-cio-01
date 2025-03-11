/*Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.*/

#include <stdio.h>  

int main(){
    int soma=0;
    int n=1;
    while (n<=50){
        soma = soma + n;
        n++;
    }
    printf ("A soma do valor é %d", soma);
    return 0;
}