#include <stdio.h>

int main(){
    int cois;
    int ncal;
    
    scanf("%d", &cois);
    scanf("%d", &ncal);
    
    int i;
    i = 0;
    int soma;
    soma = 0;
    
    while(i < ncal){
        int cal;
        scanf("%d", &cal);
        if (cal > cois){
            soma += 1;
        }
        i += 1;
    }
    
    printf("%d", soma);
}