#include <stdio.h>

int primo(int n){
    int i = 2;
    int res = 1;
    if (n > 2){
        while(i < n){
            if (n%i == 0){
                res = 0;
            }
            i +=1;
        }
    }
    else if(n == 1){
        res = 0;
    }
    return res;
}


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
     while(a <= b){
        if (primo(a) == 1){
            printf("%d\n", a);
        }
        a +=1;
    }
   
}