#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "Local.h"
#include "alumno.h"
//settings-Enviroment-GeneralSetings-TerminaltoLunchConsolePrograms
//settings-Editor-GeneralSettings-EditorSettings-Fonts-Manjari
#define LL 3
//lengh localidad
#define LA 11
//lengh Alumnos


int main()
{
    eLocalidad listaDelocalidades[LL];//={{100,"Avellaneda",1864},{101,"Wilde",1863},{102,"Lomas de Zamora",1803}};
    eAlumno listaDeAlumnos[LA];
    int id_beta=1000;
    int opcion;
    int respuesta;

    inicializar_Alumnos(listaDeAlumnos,LA);

    hardcode_Localidad(listaDelocalidades,LL);
    hardCodearAlumnos(listaDeAlumnos,10,&id_beta);


    /*printf("\n\n%d\n\n",id_beta);
    id_beta=agregarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL,id_beta);
    printf("\n\n%d\n\n",id_beta);
    //id_beta=agregarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL,id_beta);
    submenu_Mostrar(listaDeAlumnos,LA,listaDelocalidades,LL);*/

    do
    {

        //printf("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n7.Salir\n");
        //printf("Elija una opcion: ");
        //scanf("%d", &opcion)

        getValidInt("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n7.Salir\nElija una opcion: ","Error, solo numeros[1-7]",1,7,&opcion);

        switch(opcion)
        {
        case 1:
            borrar();//Usar Punteros para esto.
            respuesta=agregarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL,&id_beta);
            switch(respuesta)
            {
            case 0:
                printf("Alumno no Cargado\n");
                break;
            case 1:
                printf("Alumno Cargado\n");
                break;
            case -1:
                printf("Espacio no Disponible\n");
                break;
            }
            pausa();
            break;
        case 2:
            borrar();
            submenu_Mostrar(listaDeAlumnos,LA,listaDelocalidades,LL);
            pausa();
            break;
        case 3:
            borrar();
            sortStudentsByNameAndAverage(listaDeAlumnos,LA);
            pausa();
            break;
        case 4:
            borrar();
            respuesta = eliminarAlumno(listaDeAlumnos,LA,listaDelocalidades,LL);
            switch(respuesta)
            {
            case 0:
                printf("Accion cancelada por el usuario\n");
                break;
            case 1:
                printf("Alumno eliminado\n");
                break;
            case -1:
                printf("Dato no encontrado\n");
                break;
            }

            break;
        case 5:

            respuesta = modificarAlumno(listaDeAlumnos,A,102);
            switch(respuesta)
            {
            case 0:
                printf("Accion cancelada por el usuario\n");
                break;
            case 1:
                printf("Alumno modificado\n");
                break;
            case -1:
                printf("Dato no encontrado\n");
                break;
            }
            break;
        }
        borrar();
    }
    while(opcion!=7);






    return 0;
}



