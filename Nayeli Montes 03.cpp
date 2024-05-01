#include <stdio.h>
int main() {
    float x, y, z;
    float resultado;

    printf("Ingresa el valor de x: ");
    scanf("%f", &x);
    printf("Ingresa el valor de y: ");
    scanf("%f", &y);
    printf("Ingresa el valor de z: ");
    scanf("%f", &z);

    resultado = (x * x) + (y * y) + (z * z * z);

    printf("El resultado de calcular el cuadrado de x más el cuadrado de y más el cubo de z es: %.2f\n", resultado);

    return 0;
}