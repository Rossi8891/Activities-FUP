#include <stdio.h>

int main(){
    int num1;
    int numtel;
    int soma = 0;
    
    scanf("%d", &num1);
    scanf("%d", &numtel);
    
    
    for (int i = 0; i <8; i++){
        int digito = numtel % 10;
        
        if (digito == num1){
            soma +=1;
        }
        
        numtel = numtel/10;
    }
    
    printf("%d", soma);
}