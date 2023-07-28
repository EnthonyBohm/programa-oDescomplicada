#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float raio;
    float volume;
    float area;
}esfera;

void calc_esfera(float R, float *area, float *volume);

int main(){
    esfera R;

    printf("Qual o tamanho do Raio da esfera? "); scanf("%f", &R.raio);
}