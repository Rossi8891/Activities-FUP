#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int t = a+1;
    
    while(a > 0){
        int c = t - a;
        printf("%d", c);
        printf(") Vou estudar FUP todos os dias!\n");
        a -=1;
    }
}