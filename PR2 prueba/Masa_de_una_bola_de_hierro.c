/*
** Descripción: Calculo Masa bola de hierro
** Asunto: secuencial, ejemplo completo
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define densidad 0.00786 /* Kg/cm3                   */

int main()
{
  float diametro; /* diametro de la esfera    */
  float radio;    /* radio de la esfera (cm)  */
  float volumen;  /* volumen de la esfera     */
  float masa;     /* masa en kg               */

  system("cls||clear");
  printf("CÁLCULO DE LA MASA DE UNA BOLA DE HIERRO\n");
  printf("========================================\n\n");

  printf("Introduzca el diámetro (cm): ");
  scanf(" %f", &diametro);

  radio = diametro / 2;
  volumen = 4 * PI * radio * radio * radio / 3;
  masa = densidad * volumen;

  printf("\nMasa: %.2f Kg", masa);

  return 0;
}