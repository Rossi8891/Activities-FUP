#include <stdio.h>
#include <math.h>

int main(){
    float lado_a;
    float lado_b;
    float lado_c;
    
    scanf("%f", &lado_a);
    scanf("%f", &lado_b);
    scanf("%f", &lado_c);
    
    float per;
    per = (lado_a + lado_b + lado_c)/2;
    
    float area_ini;
    area_ini = per * (per - lado_a) * (per - lado_b) * (per - lado_c);
    
    float area_fim = sqrt(area_ini);
    
    printf("%.2f\n", area_fim);
}