#include <stdio.h>

int main(){
    int num1;
    int numt;
    int sold = 0;
    int rebel = 0;
    
    scanf("%d", &num1);
    
    while (num1 > 0){
        scanf("%d", &numt);
        if (numt%2 == 1){
            sold += numt;
        }
        else {
            rebel += numt;
        }
        
        num1 -=1;
    }
    
    int resultado;
    resultado = sold - rebel;
    
    if (resultado == 0){
        printf("empate");
    }
    
    else if (resultado > 0){
        printf("soldados");
    }
    
    else {
        printf("rebeldes");
    }
}