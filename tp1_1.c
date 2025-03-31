#include <stdio.h>

int main(){

    printf("Hola Mundo");

    int x = 5;
    int *puntero;

    puntero = &x;

    printf("\nContenido del puntero: %d\nDireccion de memoria almacenada por el puntero: %p\nDireccion de memoria de la variable: %p\nDireccion de memoria del puntero: %p\nTamanio de memoria utilizado  por esa variable usando la funcion sizeof: %d", *puntero, puntero, &x, &puntero, sizeof(x));

    return 0;
}