#include <stdio.h>

int main(){
    int num_1;
    int num_2;
    
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    
    if (num_1%3 == 0 && num_2%3 == 0 || num_2%5 == 0 && num_1%5 == 0){
        printf("sim");
    }
    
    else {
        printf("nao");
    }
    
    
}