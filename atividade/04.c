/* Escreva um programa que peça ao usuário para adivinhar um número e informe se o palpite está correto.*/

#include <stdio.h>

int main(){
    int n = 7;
    int resp;
    printf("digite um número de 0 a 10: ");
    scanf(" %d", &resp);
    if(resp!=n){
        printf("Errou!");
    }else{
        printf("Acertou!");
    } 
    return 0;
}