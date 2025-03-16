/*Faça um programa que solicite um número e imprima se é primo ou não.*/
#include <stdio.h>


int main() {
    int num;
    int i; 
    int j; 
    int primo;
    printf("Números primos de 1 a 50:\n");
    for (num = 1; num <= 50; num++) {
        if (num < 2) continue;
        primo = 1;
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                primo = 0;
                break;
            }
        }if (primo) {
            printf("%d ", num);
        }
    }
    return 0;
}

/*Professor, eu peguei da internet e não entendi muito bem...*/