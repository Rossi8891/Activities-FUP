#include <stdio.h>

int main(){
    int n;
    int orig;
    int rever = 0;
    
    scanf("%d", &orig);
    n = orig;
    
    while (n > 0){
        rever = rever * 10 + (n % 10);
        n = n/10;
    }
    
    if (orig == rever){
        printf("%d", 1);
    }
    
    else{
        printf("%d", 0);
    }
 
}