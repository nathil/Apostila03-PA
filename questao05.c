// Implemente uma função que calcule a distância d entre dois pontos

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>


float distancia(float x0, float x1, float y0, float y1){
    return sqrt(pow(x1-x0, 2) + pow(y1-y0,2));
}

int main(){
    float x0, x1, y0, y1; 

    printf("Informe o valor de x0:");
    scanf("%f", &x0); 
    printf("Informe o valor de x1:");
    scanf("%f", &x1); 
    printf("Informe o valor de y0:");
    scanf("%f", &y0); 
    printf("Informe o valor de y1:");
    scanf("%f", &y1); 

    printf("A distancia calculada e:%.2f", distancia(x0,x1,y0,y1)); 
}