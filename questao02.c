//Fazer um programa em C para calcular o fatorial de um número, nesse segundo caso a função fat que tem o seguinte
//corpo: int fat (int n), ou seja nesse caso a função fat deve retornar um int para a função principal main, 
//a função main deve imprimir o fatorial. 

#include <stdio.h>
#include <stdlib.h> 

int fat(int n){
    int fatorial = 1; 
    
    for(int i=1; i<=n; i++){
        fatorial *= i; 
    }
    
    return fatorial; 
}

int main(){
    int valor; 

    printf("Informe um valor para calcular o fatorial:"); 
    scanf("%d", &valor); 

    printf("O valor do fatorial e:%d", fat(valor)); 
}
