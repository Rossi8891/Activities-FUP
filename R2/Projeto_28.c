#include <stdio.h>
#include <math.h>

int main(){
    float v1;
    float v2;
    float v3;
    float delta;
    
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    
    delta = (v2 * v2) - 4 * v1 * v3;
    
    float s1;
    float s2;
    
    s1 = (-v2 + sqrt(delta)) / (2 * v1);
    s2 = (-v2 - sqrt(delta)) / (2 * v1);
    
    if (delta > 0){
        printf("%.2f\n%.2f", s1, s2);
    }
    else if (delta == 0){
        printf("%.2f", s1);
    }
    else {
        printf("nao ha raiz real");
    }
}