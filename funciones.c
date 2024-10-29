#include <stdio.h>
#include "funciones.h"
#include <string.h>

void Ingresarpersonas (int matriz [4][2], char nombre [40], int estadocivil ){
      
    for (int i = 0; i < 4; i++)
    {
       printf ("Para la persona %d:\n", i+1 );
       for (int j = 0; j < 3; j++)
       {
        if (j==0)
        {
           printf ("Ingrese el nombre:\n" );
           scanf ("%c", nombre[i]);
            matriz [i][j]=nombre[i];
        }
        if (j==1)
        {
           printf ("Ingrese la edad:\n" );
           scanf ("%d", matriz [i][j]);
        }
        if (j==2)
        {
            do
           {
           printf ("Seleccione el estado civil:\n" );
            printf ("1-Casado, 2-Soltero:\n" );
            scanf ("%d", estadocivil);
           
           } while (estadocivil==1 || estadocivil==2);
           matriz [i][j]=estadocivil;
        }
       }
    }
    }

    void buscarestadocivil (int matriz [4][2], char nombre [40], int estadocivil, int encontrado ){
            do
           {
           printf ("Ingrese el estado civil que desea buscar\n" );
            printf ("1-Casado, 2-Soltero:\n" );
            scanf ("%d", estadocivil);
           } while (estadocivil==1 || estadocivil==2);
           encontrado=0;
           for (int i = 0; i < 4; i++)
           {
            strcmp(matriz [i][2], estadocivil );
            if (encontrado==1)
           {
            printf ("");
           }
           else if (encontrado!=1)
           {
            printf ("No hay ninguna persona con estas caracteristicas\n" );
           }
           }
    }

    void buscaredad (int matriz [4][2], char nombre [40], int edad, int encontrado ){
        
           printf ("Ingrese la edad que desea buscar:\n" );
            scanf ("%d", edad);
            encontrado=0;
           for (int i = 0; i < 4; i++)
           {
            strcmp(matriz [i][1], edad );
            if (encontrado==1)
           {
            printf ("");
           }
           else if (encontrado!=1)
           {
            printf ("No hay ninguna persona con estas caracteristicas\n" );
           }
           }
    }
