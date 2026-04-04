#include <stdio.h>

int main(){
    int qtc;
    int vct;
    int soma_total = 0;
    
    scanf("%d", &qtc);
    
    while (qtc > 0){
        scanf("%d", &vct);
        
        
        if (vct > 1 && vct < 11){
            soma_total += vct;
        }
        
        else if(vct > 10 && vct < 14){
            soma_total += 0;
            }

        
        else{
            if(soma_total < 11){
                soma_total += 11;
            }
            else{
                soma_total += 1;
            }
        }
        
        qtc -=1;
    }
    
   printf("%d", soma_total);
}