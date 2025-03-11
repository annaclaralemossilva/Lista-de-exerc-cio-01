/*Escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso.*/

#include <stdio.h>  

int main(){
    int idade;
    do{
        printf("Digite idade: ");
        scanf ("%d", & idade);
    }while(idade<0);
    if (idade>=65){
        printf ("Idoso");
    }else if (idade>=18){
        printf ("Adulto");
    }else if (idade<12){
        printf ("Criança");
    }else{
        printf ("Adolescente");
    }
    return 0;
}