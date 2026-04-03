#include <stdio.h>

int main(){
    int i;
    i = 0;
    int menor;
    menor = 31;
    
    while(i < 5){
        int tcam;
        scanf("%d", &tcam);
        if (tcam < menor){
            menor = tcam;
        }
        i += 1;
    }
    
    printf("%d", menor);
}