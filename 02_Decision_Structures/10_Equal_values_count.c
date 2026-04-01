#include <stdio.h>

int main(){
    float sal;
    
    scanf("%f", &sal);
    
    if (sal <= 1000){
        sal *=1.2;
    }
    
    else if (sal <= 1500){
        sal *= 1.15;
    }
    
    else if (sal <= 2000){
        sal *= 1.10;
    }
    
    else {
        sal *= 1.05;
    }
    
    printf("%.2f", sal);
}