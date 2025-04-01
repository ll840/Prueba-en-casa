#include <stdio.h>
#include <math.h>

int main() {
    int numero, i;
    int numDigits, middlePos;
    int nuevoNumero = 0;
    int divisor, digit, j;

    // Leer el número original y el dígito a añadir
    printf("Introduce el número: ");
    scanf("%d", &numero);
    printf("Introduce el dígito a añadir: ");
    scanf("%d", &i);

    // Contar la cantidad de dígitos del número original
    numDigits = (int)log10(numero) + 1;

    // Calcular la posición central (si el número tiene un número impar de dígitos)
    middlePos = numDigits / 2;

    // Si el número de dígitos es par, insertar en el centro
    if (numDigits % 2 == 0) {
        // Colocar el dígito en el centro del número original
        divisor = (int)pow(10, numDigits - middlePos);
        nuevoNumero = numero / divisor;
        nuevoNumero = nuevoNumero * 10 + i;
        nuevoNumero = nuevoNumero * divisor + (numero % divisor);
    }
    // Si el número de dígitos es impar, insertar a la izquierda o derecha del centro
    else {
        // Colocar el dígito dependiendo de si es mayor que 5
        divisor = (int)pow(10, middlePos);
        digit = numero / divisor % 10;
        if (i > 5) {
            // Insertar i a la derecha del dígito central
            nuevoNumero = numero / (divisor * 10);
            nuevoNumero = nuevoNumero * 10 + digit;
            nuevoNumero = nuevoNumero * 10 + i;
            nuevoNumero = nuevoNumero * divisor * 10 + (numero % divisor);
        } else {
            // Insertar i a la izquierda del dígito central
            nuevoNumero = numero / divisor;
            nuevoNumero = nuevoNumero * 10 + i;
            nuevoNumero = nuevoNumero * divisor + (numero % divisor);
        }
    }

    // Mostrar el nuevo número
    printf("Nuevo número: %d\n", nuevoNumero);
    return 0;
}
