#include <stdio.h>
#include <stdlib.h>

void frac_div(float num, int* inteiro, float* frac);

int main(){
    int inteiro = 0 ;
    float num, frac = 0;

    printf("Digite um número: ");
    scanf("%f", &num);

    frac_div ( num, &inteiro, &frac ) ;

    printf("\tA parte inteira desse numero é: %d \n", inteiro);
    printf("\tA parte fracionária desse numero é: %f", frac);

}

void frac_div(float num, int* inteiro, float* frac){
    
    *inteiro = (int) num;
    *frac = num - *inteiro;
}