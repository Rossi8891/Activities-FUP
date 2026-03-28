#include <stdio.h>

int main(){
    float nota_1;
    float nota_2;
    
    scanf("%f", &nota_1);
    scanf("%f", &nota_2);
    
    float media;
    media = (nota_1+nota_2)/2.0;
    
    
    if (media >= 7){
        printf("%.1f\n", media);
        printf("Aprovado");
    }
    
    else if (media >= 4){
        printf("%.1f\n", media);
        printf("AF");
    }
    
    else {
        printf("%.1f\n", media);
        printf("Reprovado");
    }
    
    
}