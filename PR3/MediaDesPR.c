#include <stdio.h>
#include <math.h>

int main() {
    float temperatura, sumaTemperaturas = 0, sumaCuadrados = 0;
    int numDatos = 0;
    
    // Bucle para la entrada de datos
    while (1) {
        printf("Introduce una temperatura (-99 para finalizar): ");
        scanf("%f", &temperatura);
        
        // Finaliza si el valor introducido es -99
        if (temperatura == -99) {
            break;
        }

        // Verifica que la temperatura esté dentro del rango permitido [-50, +50]
        if (temperatura >= -50 && temperatura <= 50) {
            sumaTemperaturas += temperatura;
            sumaCuadrados += temperatura * temperatura;
            numDatos++;
        } else {
            printf("Temperatura fuera del rango permitido.\n");
        }
    }
    
    // Si no hay datos válidos, se muestra el mensaje "NO DATOS"
    if (numDatos == 0) {
        printf("NO DATOS\n");
    } else {
        // Calcula la media
        float media = sumaTemperaturas / numDatos;
        
        // Calcula la desviación estándar utilizando la fórmula proporcionada
        float desviacion = sqrt((sumaCuadrados / numDatos) - (media * media));
        
        // Imprime los resultados con el formato solicitado
        printf("%10.2f %10.2f %10d\n", media, desviacion, numDatos);
    }

    return 0;
}
