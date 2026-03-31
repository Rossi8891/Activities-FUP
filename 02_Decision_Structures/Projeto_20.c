#include <stdio.h>
#include <stdlib.h>

int main(){
    int real;
    int c1;
    int c2;
    
    scanf("%d", &real);
    scanf("%d", &c1);
    scanf("%d", &c2);  

    int rc1;
    int rc2;
    rc1 = real - c1;
    rc2 = real - c2;
    
    if (abs(rc1) == abs(rc2)){
        printf("empate");
    }
    
    else if (abs(rc1) < abs(rc2)){
        printf("primeiro");
    }
    
    else {
        printf("segundo");
    }
}