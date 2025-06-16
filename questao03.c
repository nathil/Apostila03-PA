//Fazer um programa em C que calcula o número de combinações de n elementos tomados k a k, na 
//qual a ordem dos elementos e relevante. Esse número é dado pela fórmula do arranjo: a=n!/ (n-k)! 

#include <stdio.h> 
#include <stdlib.h> 

int fat(int n ){
    int fatorial=1; 
    
    for(int i=1; i<=n; i++){
        fatorial *= i; 
    }

    return fatorial; 
}

int main(){
    int valor, k, sub; 
    float a; 

    printf("Insiria o valor de n:"); 
    scanf("%d", &valor);
    printf("Insira o valor de k:"); 
    scanf("%d", &k);

    sub = valor - k; 
    a = fat(valor)/fat(sub); 
    printf("o numero de combinacoes e:%.0f", a); 
}
