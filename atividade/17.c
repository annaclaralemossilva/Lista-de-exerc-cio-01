/*Crie um programa que peça a altura e o peso do usuário e calcule o índice de massa corporal (IMC)*/
#include <stdio.h>

int main(){
    float peso;
    float altura;
    float imc;
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura (ex:1.60m) : ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    printf("seu IMC é %f\n", imc);
    
    if(imc<=18.5){
        printf("Abaixo do peso");
    }else if(imc<=24.9){
        printf("Peso normal");
    }else if(imc<=29.9){
        printf("Acima do peso");
    }else if(imc<=34.9){
        printf("Obesidade grau I");
    }else if(imc<=39.9){
        printf("Obesidade grau II");
    }else{
        printf("Obesidade grau III");
    }
    return 0;
}