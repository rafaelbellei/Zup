// 7)​ Dado um range de 2 números inteiros, um sendo o início e outro sendo o fim, escreva um algoritmo para encontrar os números ímpares dentro deste intervalo.

#include <stdio.h>

int main(){

    int numero, impar = 0;

    for(numero = 8; numero < 14; numero++){
        impar = numero % 2;

        if(impar)
            printf("%d", numero);
    }

    return 0;
}
