
#include <stdio.h>  // Librería estándar para printf y scanf
#include "../PR2 prueba/TEST.h"    // En la práctica hay que cambiar la ruta y dejarla como está indicada en el guión




// inicia ejecución en main
int main(void)
{
    INICIO_TEST();    // inicialización de prueba 

    // la lectura cuando sea necesario claramente separa la visualización del mensaje
    printf("mensaje ..........: "); 
    scanf("%f", salida);
    // No sé si las notas se ponen con decimales o números enteros


    system("cls||clear");
    printf("CALCULO DE CALIFICACIONES\n");
    printf("=================================\n\n");

    float n_TE = 0;
    float n_PR = 0;
    float examen = 0;

    printf("¿Cuál es la nota de los trabajos evaluables (0-1)?: ");
    scanf("%f", &n_TE);

    printf("¿Cuál es la nota de las practicas (0-1)?:  ");
    scanf("%f", &n_PR);

    printf("¿Cuál es la nota obtenida en el examen (1-10)?:  ");
    scanf("%f", &examen);

    float calificacion = examen;
    
    float suma = n_TE + n_PR + examen;
    float suma= salida
    
    /* Por cada resultado mostrado como parte de la salida se debe
     * incluir el uso de mostrar para el test PRINT_TEST que
     * es aquello que debe recogerse en el archivo de casos de prueba
     */
    printf("salida ..... %f\n", suma); // muestra el resultado en interfaz
    PRINT_TEST("%f ",suma); // Guarda el resultado para verificar 
         // sin mensaje y con espacio después para separar


    FIN_TEST();     // finalización
    return 0;
} // fin de main
