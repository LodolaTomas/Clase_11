#define OCUPADO 1
#define LIBRE 0



typedef struct
{
    int legajo;
    char name[32];
    char lastname[32];
    int promedio;
    int idLocalidad;
    int estado;

}eAlumno;

void inicializar_Alumnos(eAlumno listadoDeAlumnos[],int lengAlumnos);
eAlumno cargarAlumno(eLocalidad arrayLocalidad[], int lengLocalidad);
int buscar_Libre(eAlumno listadoDeAlumnos[],int lengAlumnos);
int agregarAlumno(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad,int* id_beta);
void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam,int* id);
void mostrarUnAlumno(eAlumno miAlumno, eLocalidad miLocalidad);
void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam, eLocalidad listaLocalidad[], int lenLocal);
void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam);
int eliminarAlumno(eAlumno listadoDeAlumnos[], int tam, eLocalidad listaLocalidad[], int lenLocal);

void submenu_Mostrar(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad);
void mostrar_porLocalidad(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad);
void mostrar_AlumnoLocalidad(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad);

void mostrar_SoloAvellaneda(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad);

int verifyConformity (char message[], char cancelMessage[]);

void pausa();
void borrar();
