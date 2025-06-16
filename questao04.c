//Construir uma função somaprod que calcula a soma e o produto de dois números, a função tem o seguinte 
//estrutura: void somaprod (int a, int b, int *p, int *q), a chamada a função somaprod deve ser feita na função
//main, que deve conter duas variáveis locais p e q, os endereços de p e q são passados na chamada da função 
//somaprod, e o valor da soma e do produto serão armazenados em p e em q respectivamente na função somaprod, 
//visto que a função somaprod não retorna nenhum valor para a função main

#include <stdio.h>
#include <stdlib.h> 

void somaprod(int a, int b, int *p, int *q){
    *p = a+b; 
    *q = a*b; 
}

int main(){
    int p, q;
    somaprod(2,3,&p,&q); 

    printf("Soma:%d\nProduto:%d\n",p, q); 
}