#include <stdio.h>

int main(){
    float mes_j;
    float mes_p;
    float gas_p;
    
    scanf("%f", &mes_j);
    scanf("%f", &mes_p);
    scanf("%f", &gas_p);
    
    if (((mes_p - gas_p) - mes_j) > 0.000001){
        printf("Diferentes");
    }
    else {
        printf("Iguais");
        
    }
}