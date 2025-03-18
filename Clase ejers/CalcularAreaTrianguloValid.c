

int numero, suma = 0;

printf("Introduce números enteros (introduce 0 para salir):\n");

do {
    printf("Introduce un número: ");
    scanf("%d", &numero);

    suma += numero;  // Acumular el número en la suma

} while (numero != 0);

printf("La suma de los números ingresados es: %d\n", suma);



nt main()
{
	char c;

	do
	{

		printf("\n");
		printf("======\n\n");

            // código que resuelve el problema

		printf("\n\n¿Desea efectuar una nueva operación (s/n)? ");
		scanf(" %c", &c);
	} while ((c != 'N') && (c != 'n'));
	return 0;
}