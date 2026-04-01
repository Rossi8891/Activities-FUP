#include <stdio.h>

int main(){
    int t1;
    int t2;
    int t3;
    
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
    
    if (t1 > t2 && t1 > t3){
        if (t2 > t3){
            printf("G M P");
        }
        else{
            printf("G P M");
        }
    }
    
    else if (t2 > t1 && t2 > t3){
        if (t1 > t3){
            printf("M G P");
        }
        else {
            printf("P G M");
        }
    }
    
    else {
        if (t2 > t1){
            printf("P M G");
        }
        else {
            printf("M P G");
        }
    }
}