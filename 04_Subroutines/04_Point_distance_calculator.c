#include <stdio.h>
#include <math.h>

float dab(float xa, float ya, float xb, float yb){
    float resultado;
    resultado = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    return resultado;
    
}

int main(){
    float xa, xb, ya, yb;
    scanf("%f %f", &xa, &ya);
    scanf("%f %f", &xb, &yb);
    printf("%.2f", dab(xa, ya, xb, yb));
}