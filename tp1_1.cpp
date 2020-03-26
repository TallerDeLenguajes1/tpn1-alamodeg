#include <stdio.h>
int main() {
    int *punt;
    int a=8;
    punt = &a;

    printf("El contenido del puntero es %d\n",*punt);
    printf("La direccion de mem almacenada del puntero es %p\n",punt);
    printf("La direccion de mem de la variable es %p\n",&a);
    printf("La direccion de mem del puntero en si %p\n",&punt);

    printf("El tamaño de memoria de la variables es %d bits\n",sizeof(int));
    return 0;
}