#include <stdio.h>

int main() {
    int numero;
    float r;
 
    printf("Programa que calcula el cuadrado de un número disminuido en 25.\n"); 
    printf("Ingrese el número: ");
    scanf("%d", &numero); 
    
    r = (numero * 2) -25;
 
    printf("El resultado es: %f", r); 
 
    return 0;
}