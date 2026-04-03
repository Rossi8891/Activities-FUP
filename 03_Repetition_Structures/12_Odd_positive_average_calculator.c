#include <stdio.h>

int main(){
    int num;
    int nummed = 0;
    int qtnum = 0;
    
    scanf("%d", &num);
    
    if (num%2 == 1 && num > -1){
            nummed += num;
            qtnum += 1;
        }
    
    while (num > -1){
        scanf("%d", &num);
        if (num%2 == 1 && num > -1){
            nummed += num;
            qtnum += 1;
        }
    }
    
    printf("%d", nummed/qtnum);
}