#include <stdio.h>

// Versión 1: usa parámetro de salida
void leerRealIntervalo1(float a, float b, float *x) {
    if (a == b) {
        *x = a;
    } else {
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }
        do {
            printf("\nIntroduzca numero en [%.0f,%.0f]: ", a, b);
            scanf(" %f", x);
        } while (*x < a || *x > b);
    }
}

// Versión 2: devuelve el valor directamente
float leerRealIntervalo2(float a, float b) {
    float x;

    if (a == b) {
        return a;
    } else {
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }
        do {
            printf("\nIntroduzca numero en [%.0f,%.0f]: ", a, b);
            scanf(" %f", &x);
        } while (x < a || x > b);
    }

    return x;
}

// Versión 3: permite máximo 3 intentos y devuelve 1 si tuvo éxito, 0 si falló
int leerRealIntervalo3(float a, float b, float *x) {
    int intentos = 0;

    if (a == b) {
        *x = a;
        return 1;
    } else {
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }

        while (intentos < 3) {
            printf("\nIntento %d - Introduzca numero en [%.0f,%.0f]: ", intentos + 1, a, b);
            scanf(" %f", x);

            if (*x >= a && *x <= b) {
                return 1; // Éxito
            }

            intentos++;
        }
    }

    return 0; // Falló después de 3 intentos
}

// Función principal para probar las tres versiones
int main() {
    float valor;

    // Prueba versión 1
    printf("\n--- Prueba leerRealIntervalo1 ---\n");
    leerRealIntervalo1(1.0, 5.0, &valor);
    printf("Valor introducido (v1): %.2f\n", valor);

    // Prueba versión 2
    printf("\n--- Prueba leerRealIntervalo2 ---\n");
    valor = leerRealIntervalo2(10.0, 20.0);
    printf("Valor introducido (v2): %.2f\n", valor);

    // Prueba versión 3
    printf("\n--- Prueba leerRealIntervalo3 ---\n");
    if (leerRealIntervalo3(100.0, 200.0, &valor)) {
        printf("Valor introducido (v3): %.2f\n", valor);
    } else {
        printf("Error: se superaron los intentos permitidos.\n");
    }

    return 0;
}