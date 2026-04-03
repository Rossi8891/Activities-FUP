#include <stdio.h>

int main(){
    int na;
    int nb;
    int nx;
    
    scanf("%d", &na);
    scanf("%d", &nb);
    scanf("%d", &nx);
    
    int soma;
    soma = 0; 
    
    while(na < (nb + 1)){
        if (na%6 == 0 && na%nx == 0){
            soma += na; 
        }
       na +=1;
    }
    
    printf("%d", soma);
}