// Implemente uma função que efetua a troca de dois números, a função main passa dois parâmetros inteiros para 
// a função troca que terá o seguinte corpo: void troca(int *px,int *py) 

#include <stdio.h>
#include <stdlib.h>

void troca(int *px, int *py){
    int auxiliar; 
    auxiliar = *py; 
    *py = *px; 
    *px = auxiliar; 
}

int main(){
    int px = 5, py = 8; 

    printf("Antes da realizacao da troca:%d e %d\n", px, py);
    troca(&px, &py); 
    printf("Após da realizacao da troca:%d e %d", px, py);
}