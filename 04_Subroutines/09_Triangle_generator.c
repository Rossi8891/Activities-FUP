#include <stdio.h>

void tri(int a){
    int t = a;
    
    while(t > 0){
        
        int x = t;
        while (x > 0){
            printf(" ");
            x -=1;
        }
        
        int y = t;
        while(y < a+1){
            printf("%d ", a);
            y +=1;
        }
        
        printf("\n");
        
        t -=1;
    }
    
}

int main(){
   int n;
   scanf("%d", &n);
   tri(n);
}