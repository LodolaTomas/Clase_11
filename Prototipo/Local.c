#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "inputs.h"
#include "Local.h"


void hardcode_Localidad(eLocalidad arrayLocalidad[],int lenLocalidad)
{
    int i;
    int id[]= {101,102,103};
    char localidad[][32]= {"Avellaneda","Wilde","Lomas de Zamora"};
    int codigoPostal[]= {1870,1872,1700};
    for(i=0; i<lenLocalidad; i++)
    {
        arrayLocalidad[i].id=id[i];
        strcpy(arrayLocalidad[i].descripcion,localidad[i]);
        arrayLocalidad[i].codPostal=codigoPostal[i];
    }



}
eLocalidad una_localidad(eLocalidad arrayLocalidad[],int lenLocalidad)
{
    eLocalidad auxLocalidad;
    int auxId;
    int i;
    mostrar_Localidades(arrayLocalidad,lenLocalidad);
    getValidInt("Elija una Localidad:","ERROR. Solo Numeros",100,103,&auxId);

    for(i=0; i<lenLocalidad; i++)
    {
        if(auxId==arrayLocalidad[i].id)
        {
            auxLocalidad=arrayLocalidad[i];

        }

    }
    return auxLocalidad;

}
void mostrar_unaLocalidad(eLocalidad unaLocalidad)
{

    printf("%d %19s %11d\n",unaLocalidad.id,unaLocalidad.descripcion,unaLocalidad.codPostal );

}
void mostrar_Localidades(eLocalidad arrayLocalidad[],int lenLocalidad)
{
    int i;
    printf("%5s %19s %15s\n\n","ID","Localidad","Cod.Postal");
    for(i=0; i<lenLocalidad; i++)
    {
        mostrar_unaLocalidad(arrayLocalidad[i]);

    }

}

int buscarLocalidadId(eLocalidad listaLocalidad[],int lenLocal,int idLocalidad)
{
    int i;
    int index=-1;

    for(i=0; i<lenLocal; i++)
    {
        if(idLocalidad==listaLocalidad[i].id)
        {
            index=i;
            break;
        }
    }

    return index;
}

int contarMinimo(eContador arrayContador[],int lenContador)
{
    int i;
    int flag=0;
    int minimo;

    for(i=0; i<lenContador; i++)
    {
        if(flag==0 || minimo>arrayContador[i].contadorAlumnos)
        {
            minimo=arrayContador[i].contadorAlumnos;
            flag=1;

        }

    }
    return minimo;
}

int contarMaximo(eContador arrayContador[],int lenContador)
{
    int i;
    int flag=0;
    int maximo=0;

    for(i=0; i<lenContador; i++)
    {
        if(flag==0 || maximo<arrayContador[i].contadorAlumnos)
        {
            maximo=arrayContador[i].contadorAlumnos;
            flag=1;

        }

    }
    return maximo;

}
void mostrar_Contador(eContador arrayContador[],int lenContador,eLocalidad arrayLocalidad[],int lenLocalidad,int resultado)
{
    int j;
    int i;
    int respuesta;

    if(resultado==1)
    {
    borrar();
    respuesta=contarMinimo(arrayContador,lenContador);
    printf("La localidad/es con menos Habitanes es:\n");
    }
    if(resultado==2)
    {
    borrar();
    respuesta=contarMaximo(arrayContador,lenContador);
    printf("La localidad/es con mas Habitanes es:\n");
    }

    for(j=0; j<lenLocalidad; j++)
    {
        if(respuesta==arrayContador[j].contadorAlumnos)
        {
            for(i=0; i<lenContador; i++)
            {
                if(arrayContador[j].idLocalidad==arrayLocalidad[i].id)
                {
                    mostrar_unaLocalidad(arrayLocalidad[i]);
                    break;
                }
            }
        }


    }

}
void hardcode_Contador(eContador arrayContador[],int lenContador,eLocalidad arrayLocalidad[])
{

    int i;
    for(i=0; i<lenContador; i++)
    {
        arrayContador[i].contadorAlumnos=0;
        arrayContador[i].idLocalidad=arrayLocalidad[i].id;
    }

}

