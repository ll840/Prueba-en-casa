#include <stdio.h>
#include <math.h>  // Para sqrt()

int main() {
    float temp, suma = 0, media, desviacion = 0;
    float temperaturas[100];  // Hasta 100 datos válidos
    int contador = 0;

    printf("Introduce temperaturas entre -50 y 50 (finaliza con -99):\n");

    while (1) {
        scanf("%f", &temp);

        if (temp == -99) {
            break;
        }

        if (temp >= -50 && temp <= 50) {
            temperaturas[contador] = temp;
            suma += temp;
            contador++;
        } else {
            printf("⚠️ Temperatura fuera del rango válido. No se guarda.\n");
        }
    }

    if (contador == 0) {
        printf("No se introdujeron datos válidos.\n");
        return 0;
    }

    media = suma / contador;

    // Calcular la desviación estándar
    for (int i = 0; i < contador; i++) {
        desviacion += pow(temperaturas[i] - media, 2);
    }

    desviacion = sqrt(desviacion / contador);

    // Mostrar resultados
    printf("\nNº de datos válidos: %d\n", contador);
    printf("Tmedia = %.2f\n", media);
    printf("desvia = %.2f\n", desviacion);

    return 0;
}
