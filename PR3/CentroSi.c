#include <stdio.h>
#include <string.h>

int main() {
    char numero[9];  // Hasta 8 dígitos + '\0'
    int i;
    
    printf("Introduce un número entero de 2 a 8 dígitos: ");
    scanf("%8s", numero);

    int longitud = strlen(numero);

    if (longitud < 2 || longitud > 8) {
        printf("Error: la longitud debe estar entre 2 y 8 dígitos.\n");
        return 1;
    }

    printf("Introduce un número entero de un solo dígito (0 a 9): ");
    scanf("%d", &i);

    if (i < 0 || i > 9) {
        printf("Error: el número debe ser un dígito entre 0 y 9.\n");
        return 1;
    }

    // Preparar partes del número
    char ParteIzq[9] = "";
    char ParteDer[9] = "";
    char ParteMedio[2];  // solo un dígito insertado
    ParteMedio[0] = i + '0';  // Convertimos el entero a carácter
    ParteMedio[1] = '\0';

    char nuevoNumero[20] = "";

    int mitad = longitud / 2;

    if (longitud % 2 == 0) {
        // Longitud par: insertar en el centro
        strncpy(ParteIzq, numero, mitad);
        strncpy(ParteDer, numero + mitad, longitud - mitad);
    } else {
        // Longitud impar
        if (i > 5) {
            // Insertar a la izquierda del dígito central
            strncpy(ParteIzq, numero, mitad);
            strncpy(ParteDer, numero + mitad, longitud - mitad);
        } else {
            // Insertar a la derecha del dígito central
            strncpy(ParteIzq, numero, mitad + 1);
            strncpy(ParteDer, numero + mitad + 1, longitud - mitad - 1);
        }
    }

    // Construir el nuevo número
    strcat(nuevoNumero, ParteIzq);
    strcat(nuevoNumero, ParteMedio);
    strcat(nuevoNumero, ParteDer);

    printf("El nuevo número es: %s\n", nuevoNumero);

    return 0;
}
