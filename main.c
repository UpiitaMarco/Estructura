//Archivo para mostrar la estructura de un programa modificado en lenguaje C.
#include <stdio.h> //Archivos de cabecera que contienen los prototipos de funciones de biblioteca 
#include <stdlib.h> //y las definiciones de algunas constantes
#include <limits.h>
#define SHIFTL(x, y) x<<y //Desplaza el contenido de xy lugares a la izquierda (a nivel de bits)
#define SHIFTR(x, y) x>>y //Desplaza el contenido de xy lugares a la derecha (a nivel de bits)

int main(int argc, char *argv[])
{
int a, b, c;
    printf("En una variable de tipo int podemos almacenar \nnumeros o valores entres desde %d hasta %d \n", INT_MIN, INT_MAX);
    a=INT_MIN;
    b=sizeof(int); //Cantidad de bytes que utiliza el compilador para almacenar una variable de tipo int
    printf("Un int se almacena en %i bits \n", 8*b);
 #include "dummy.c"
 	printf("\n");	
    system("PAUSE");
    return 0;
}
