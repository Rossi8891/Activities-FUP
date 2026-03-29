#include <stdio.h>

int main(){
    int j1;
    int j2;
    int j3;
    
    scanf("%d", &j1);
    scanf("%d", &j2);
    scanf("%d", &j3);
    
    if (j2 == j3 && j2 != j1){
       printf("jog1");
    }
    
    else if (j1 == j3 && j1 != j2){
        printf("jog2");
    }
    
    else if(j1 == j2 && j2 == j3){
        printf("empate");
    }
    
    else {
        printf("jog3");
    }
}