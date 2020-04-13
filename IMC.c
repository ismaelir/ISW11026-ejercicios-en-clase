/******************************************************************************

INDICE DE MASA CORPORAL 
Formula IMC=peso/(altura^2)
DATOS DE ENTRADA:

-Nombre del individuo 
-Altura del individuo
-Peso del individuo 

DATOS DE SALIDA 
-Nombre 

-IMC

*******************************************************************************/
#include <stdio.h>  // incluir librerias 
#include <math.h>
void main()         // declaracion funcion main
{                   // inicio programa
    char nombres[20];  //Declaración de Variables Locales 
    float peso, altura, IMC=0;
    
    printf("Ingresar nombres y apellido: "); //Ingreso de variable nombres en el sistema
    scanf("%s",nombres);    //asignacion de localidad y espacio de memoria
    printf("Ingrese la altura:"); //Ingreso de variable altura en el sistema
    scanf("%f",&altura);      //asignacion de localidad y espacio de memoria
    printf("Ingrese el peso:"); //Ingreso de variable peso en el sistema
    scanf("%f",&peso); //asignacion de localidad y espacio de memoria
    IMC=(peso/pow(altura,2)); // operación de la variable IMC
    printf("Nombre del individsuo: %s\n", nombres); //Datos de salida
    printf("Su IMC es %.2f", IMC); //Datos de salida
}
