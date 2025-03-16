/*
Faça um programa que conte de 1 a 100 e imprima "Fizz" para números divisíveis por 3 e
"Buzz" para números divisíveis por 5. Para números que são divisíveis por ambos, imprima "FizzBuzz".
*/

#include <stdio.h>

int main(){
    int n = 1;
    while(n<=100){
        if(n%3==0 &&n%5==0){
            printf("%d FizzBuzz\n", n);
        }else if(n%3==0){
            printf("%d Fizz\n", n);
        }else if(n%5==0){
            printf("%d Buzz\n", n);
        }
        n = n + 1;
    }
    return 0;
}