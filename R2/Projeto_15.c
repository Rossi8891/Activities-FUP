#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int tot;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 == n2 && n1 != n3 || n3 == n2 && n3 != n1 || n3 == n1 && n3 != n2){
        tot = 2;
    }
    
    else if (n1 == n2 && n2 == n3){
        tot = 3;
    }
    
    else{
        tot = 0;
    }
    
    printf("%d", tot);
    
}