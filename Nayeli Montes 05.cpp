#include <stdio.h>

int main() {
    float num1,num2;
    float resultado;

    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    resultado = (num1 - num2) * (num1 - num2);

    printf("El cuadrado de la diferencia de los dos números es: %.2f\n", resultado);

    return 0;
}