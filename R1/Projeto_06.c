#include <stdio.h>

int main(){
    float preco_24;
    scanf("%f", &preco_24);
    
    float constante;
    constante = preco_24/24;
    
    printf("%f\n", constante * 4);
    printf("%f\n", constante * 8);
    printf("%f\n", constante * 12);
    printf("%f", constante * 16);
}