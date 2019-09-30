typedef struct{

int id;
char descripcion[32];
int codPostal;

}eLocalidad;

typedef struct
{

    int idLocalidad;
    int contadorAlumnos;

}eContador;


eLocalidad una_localidad(eLocalidad arrayLocalidad[], int lenLocalidad);
void mostrar_unaLocalidad(eLocalidad unaLocalidad);
void mostrar_Localidades(eLocalidad arrayLocalidad[] ,int lenLocalidad);
void hardcode_Localidad(eLocalidad arrayLocalidad[],int lenLocalidad);
int buscarLocalidadId(eLocalidad listaLocalidad[], int lenLocal, int idLocal);
void contarMinAlumnos(eLocalidad listaLocalidad[],int lenLocal,eContador cantidadLocal,int lenCantidad);

void hardcode_Contador(eContador arrayContador[],int lenContador,eLocalidad arrayLocalidad[] );
void contador_AlumnosLocalidad(eAlumno listadoDeAlumnos[],int lengAlumnos,eLocalidad arrayLocalidad[],int lengLocalidad,eContador arrayContador[],int lenContador);















