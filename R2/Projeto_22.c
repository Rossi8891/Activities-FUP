#include <stdio.h>

int main(){
    float p1;
    float p2;
    float p3;
    float tra;
    float menor;
    menor = 10000;
    
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    scanf("%f", &tra);
    
    if (p1 < menor){
        menor = p1;
    }
    if (p2 < menor){
        menor = p2;
    }
    if (p3 < menor){
        menor = p3;
    }
    
    float media;
    media = (p1 + p2 + p3 + tra - menor)/3;
    
    if (media >= 7){
        printf("Aprovado com %.1f", media);
    }
    
    else {
        printf("Final com %.1f", media);
    }
}