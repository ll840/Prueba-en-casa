
#include <stdio.h>

int main() {
    int Y, X, Z;  // Y: altura, X: ancho, Z: grosor del borde
    
    // Solicitar el valor de la altura, el ancho y el grosor
    printf("Introduce el valor de la altura (entre 4 y 14): ");
    scanf("%d", &Y);
    printf("Introduce el valor de la anchura (entre 4 y 14): ");
    scanf("%d", &X);
    printf("Introduce el grosor del borde (menor que la altura y la anchura): ");
    scanf("%d", &Z);

    // Verificar si los valores están dentro del rango y si el grosor es válido
    if (4<=Y<=14 && 4<=X<=14 && 1<= Z && Z < Y && Z < X) 
    {
        // Dibujo del rectángulo
        for (int i = 0; i < Y; i++) 
        {
            for (int j = 0; j < X; j++) {
                // Si estamos en la parte del borde, se imprime un asterisco
                if (i < Z || i >= Y - Z || j < Z || j >= X - Z)
                {
                    printf("*");
                } else {
                    // Si no estamos en el borde, imprimimos un punto (.)
                    printf(".");
                }
            }
            printf("\n");
        }
    } else {
        printf("Los valores de altura, anchura y grosor deben estar dentro del rango correcto.\n");
    }

    return 0;
}
