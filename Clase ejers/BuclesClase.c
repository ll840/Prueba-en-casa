

int main(void)
{
    int contador = 0;   // Variable para llevar la cuenta de cuántos números se han leído
    int suma = 0;       // Variable para almacenar la suma de los números
    int numero;         // Variable para almacenar cada número introducido por el usuario
    
    while (contador < 10)
    {
        printf("Introduce un número entero: ");
        scanf("%d", &numero);
    
        suma = suma + numero;   // Suma el número al total
        contador++;       // Incrementa el contador
    }
    
    printf("La suma de los 10 números enteros es: %d\n", suma);

}
