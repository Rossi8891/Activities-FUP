#include <stdio.h>

float fatorial(int n){
    int a = 1;
    while(n > 1){
        a = a * n;
        n -=1;
    }
    return a;
}

float euler(int x){
    float resx = 0;
    while(x > 0){
        resx += (1.0/fatorial(x));
        x -=1;
    }
    return (1 + resx);
}


int main(){
    int num;
    scanf("%d", &num);
    printf("%f", euler(num));
}