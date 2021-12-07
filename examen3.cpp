 /*
  typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;
    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;
    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.
    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.
        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/
#include <stdio.h>
#include <string.h>

typedef struct {

    char nombre[40];
    char pais[25];
#include<stdio.h>


typedef struct
{
  char nombre[40];
  char pais[25];
}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

typedef struct
{
  DatosPersonales datos;
  char deporte[30];
  int numMedallas;
}Deportista;

void leerarchivo(FILE archivo);
void medallas(FILE archivo);

int main()
{
    Deportista deportistas[100];
    // Puede cambiar la declaración de este arreglo a donde lo considere necesario
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
    FILE *archivo;
    archivo = fopen("deportistas.txt", "r");
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitación", "Esgrima"};
}

void leerArchivos(Deportistas deportistas)
{
  FILE *archivo
  archivo=fopen("deportistas.txt", "r");
  fscanf(archivo, "%s", deportistas.datos.nombre);
  fscanf(archivo, "%s", deportistas.datos.pais);
  fscanf(archivo, "%s", deportistas.deporte);
  fscanf(archivo, "%d", &deportistas.medallas);
}

void medallas(FILE archivo)
{
    int i, medallas, natacion, atletismo, ciclismo, gimnasia, equitacion, esgrima;

    for(i=0; i<16; i++)
    {

        fscanf(archivo, "%s", deportistas.deporte);
        fscanf(archivo, "%d", &deportistas.medallas);

        if(deportistas.deporte = 'Natación')
        {
            natacion =+ medallas;
        }
        else
        {
            if(deportista.deporte = 'Atletismo')
            {
                atletismo =+ medallas;
            }
            else
            {
                if(deportista.deporte = 'Ciclismo')
                {
                   ciclismo =+ medallas;
                }
                else
                {
                     if(deportista.deporte = 'Gimnacia')
                     {
                         gimnasia =+ medallas;
                     }
                     else
                     {
                         if(deportista.deporte = 'Equitación')
                         {
                              equitacion =+ medallas;
                         }
                         else
                         {
                              esgrima =+ medallas;
                         }
                     }
                }
            }
        }
    }
    printf("El numero de medallas en %s son %c", deporte[0][0], natacion);
    printf("El numero de medallas en %s son %c", deporte[1][0], atletismo);
    printf("El numero de medallas en %s son %c", deporte[2][0], ciclismo);
    printf("El numero de medallas en %s son %c", deporte[3][0], gimnacia);
    printf("El numero de medallas en %s son %c", deporte[4][0], equitacion);
    printf("El numero de medallas en %s son %c", deporte[5][0], esgrima);

    return 0;
}
