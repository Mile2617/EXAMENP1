#include <stdio.h>
#include "funciones.h"

int main(int argc, char const *argv[])
{
    int matriz [4][2];
    char nombre [40];
    int edad[4];
    int estadocivil;
    int op;

   for (int i = 0; i < 4; i++)
   {
    Ingresarpersonas(matriz, nombre , estadocivil );
   }

   
     printf ("Ingrese que desea buscar\n" );
            printf ("1-Por estado civil, 2-Por edad\n, 3-Salir" );
            scanf ("%d", op);
            do
            {
               switch (op)
            {
            case 1:
            buscarestadocivil;
            break;

            case 2:
            buscaredad;
            break;
            
            default:
                break;
            }
            } while (op!=3);
    return 0;
}