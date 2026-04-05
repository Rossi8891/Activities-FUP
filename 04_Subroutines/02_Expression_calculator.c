#include <stdio.h>

int fatorial(int n){
    int tot = 1;
    
    while(n > 1){
       tot *= n;
       n -=1;
    }
    return tot;
}

int potencia(int b, int e){
    int result = 1;
    while(e > 0){
        result *=b;
        e -=1;
    }
    return result;
}

int main(){
    printf("%d\n", fatorial(5)-fatorial(4));
    printf("%.2f\n", 1.0/(fatorial(3)) + fatorial(4));
    printf("%d\n", fatorial((fatorial(4) -21)));
    printf("%.2f\n", potencia(8, 3) + (double)potencia(5, 4) / potencia(3, 5));
    printf("%d\n", potencia(fatorial(3), (fatorial(2)+1)) + fatorial(potencia(2, 2)) );
}
