#include <stdio.h>

float converte_para_celsius(float n){
    float resultado;
    resultado = (n -32)*5/9;
    return resultado;
}

int main(){
    float far;
    scanf("%f", &far);
    printf("%f", converte_para_celsius(far));
}