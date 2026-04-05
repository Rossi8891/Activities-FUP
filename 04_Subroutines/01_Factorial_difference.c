#include <stdio.h>

int fatorial(int n){
    int tot = 1;
    
    while(n > 1){
       tot *= n;
       n -=1;
    }
    return tot;
}

int main(){
    printf("%d", fatorial(5)-fatorial(4));
}