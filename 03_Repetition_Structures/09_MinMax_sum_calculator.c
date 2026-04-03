#include <stdio.h>

int main(){
    int i;
    i = 0;
    int menor;
    menor = 1000000;
    int maior;
    maior = 0;
    
    while(i < 5){
        int nat;
        scanf("%d", &nat);
        if (nat < menor){
            menor = nat;
        }
        if (nat > maior){
            maior = nat;
        }
        i += 1;
    }
    
    printf("%d", (menor + maior));
    
}