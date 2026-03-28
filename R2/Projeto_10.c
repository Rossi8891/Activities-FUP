#include <stdio.h>

int main(){
    int num_1;
    int num_2;
    
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    
    if (num_1 % num_2 != 0){
        printf("nao");
    }
    
    else {
        printf("sim");
    }
    
    
}