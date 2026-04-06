#include <stdio.h>

int cont(int a){
    int c = 0;
    while(a > 0){
        a = a/10;
        c +=1;
    }
    
    return c;
}

int main(){
   int n;
   scanf("%d", &n);
   printf("%d", cont(n));
}