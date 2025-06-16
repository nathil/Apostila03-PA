//)Fazer um programa em C para calcular o fatorial de um número, construa uma função fat que tem o corpo: 
//void fat (int n), a função principal main chama a função fat e a função fat imprime o fatorial.

#include <stdio.h>
#include <stdlib.h>

void fat(int n){
    int fatorial = 1; 
    
    for(int i=1; i<=n; i++){
        fatorial *= i; 
    }
    printf("O valor do fatorial e:%d", fatorial);
}

int main(){
    int valor; 

    printf("Informe o valor que deseja calcular o fatorial:"); 
    scanf("%d", &valor); 

    fat(valor); 
}