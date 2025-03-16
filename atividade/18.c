/*Faça um programa que solicite um número e imprima se é primo ou não.*/
#include <stdio.h>

int main() {
    int n;
    int i;
    int primo = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n < 2){
        primo = 0;
    }else{
        for(i = 2; i * i <= n; i++){
            if(n % i == 0){
                primo = 0;
                break;
            }
        }
    }
    if (primo){
        printf("%d é um número primo.\n", n);
    }
    else{
        printf("%d não é um número primo.\n", n);
    }
    return 0;
}

/*Professor, eu peguei da internet e não entendi muito bem...*/