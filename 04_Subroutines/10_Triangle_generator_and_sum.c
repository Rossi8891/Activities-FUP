#include <stdio.h>

void tri(int n){
    int t = n;
    int soma = 0;
    
    while(t > 0){
        int x = (n + 1) - t;
        
        while(x > 0){
            int r = (n - x - t) + 2;
            printf("%d ", r);
            soma += r;
            x -=1;
            
        }
        printf("\n");
        
        t -=1;
    }
    printf("%d\n", soma);
}

int main(){
    int n;
    scanf("%d", &n);
    tri(n);
}