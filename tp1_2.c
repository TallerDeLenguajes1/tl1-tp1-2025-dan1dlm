#include <stdio.h>

void cuadrado2(int x);
int cuadrado(int x);
void mostrar(int *x);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{

    int x = 6;

    printf("\nPrimero valor de la variable x: %d\n", x);

    x = cuadrado(x); // LLAMO LA PRIMERA FUNCION TIPO INT

    printf("\nResultado de la primera funcion: %d\n", x);

    x = 6;

    printf("\nDevolvemos el valor de la variable a 6 y aplicamos la segunda funcion tipo VOID\n");

    cuadrado2(x); //LLAMO LA SEGUNDA FUNCION TIPO VOID

    printf("\nResultado de la segunda funcion: %d\n", x);

    mostrar(&x); //LLAMO A LA FUNCION PARA MOSTRAR LOS DATOS Y EL CONTENIDO DE LA VARIABLE

    int a = 2, b = 4; //DECLARO NUEVAS VARIABLES PARA PROBAR LAS FUNCIONES INVERTIR Y ORDEN
    printf("\nDeclaramos dos nuevas variables a = 2, b= 4, luego aplicamos las funciones de invertir y ordenar\n");

    printf("\nValores originales de las variables: %d - %d\n", a, b);

    invertir(&a, &b);

    printf("\nValores invertidas de las variables: %d - %d\n", a, b);

    orden(&a, &b);

    printf("\nOrdenamos las variables con la funcion ORDENAR\n");

    printf("\nValores ordenados: %d - %d\n", a, b);

    return 0;
}

int cuadrado(int x)
{
    return (x * x);
}

void cuadrado2(int x)
{
    int resultado;

    resultado = x * x;

    printf("\nResultado de la operacion: %d\n", resultado);
}

void mostrar(int *x)
{
    printf("\nDireccion de la variable: %p\nContenido de la variable: %d\n", x, *x);
}

void invertir(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux;

    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}