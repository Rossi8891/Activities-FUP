#include <stdio.h>

int main(){
    int qttazos;
    scanf("%d", &qttazos);
    
    int tz_atual;
    int tz_anterior;
    int cont_atual = 1;
    int maior_cont = 1;
    int final;
    
    scanf("%d", &tz_anterior);
    final = tz_anterior;
    
    while (qttazos > 1){
        scanf("%d", &tz_atual);
        if (tz_atual == tz_anterior){
            cont_atual += 1;
        }
        
        else{
            if (cont_atual > maior_cont){
                maior_cont = cont_atual;
                final = tz_anterior;
                cont_atual = 1;
            }
        }
        tz_anterior = tz_atual;
        qttazos -=1;
    }
    
     if (cont_atual > maior_cont){
                final = tz_anterior;
            }
            
    printf("%d", final);
    
}
