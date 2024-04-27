#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nombres[30];
    char genero;
}strAlumno;

strAlumno cargarAlumnos(strAlumno alumno);
int cargarArregloDeAlumnos(strAlumno arrAlumnos[], int dim);
void mostrarAlumnos(strAlumno alumno);
void mostrarArregloDeAlumnos(strAlumno alumno[], int validos);

int main()
{
    ///Ejercicio 1
    int dim = 50;
    strAlumno arrAlumnos[dim];

    int validos = cargarArregloDeAlumnos(arrAlumnos, dim);

    mostrarArregloDeAlumnos(arrAlumnos, validos);

    return 0;
}

///Ejericicio 1
strAlumno cargarAlumnos(strAlumno alumno){

    printf("Ingrese la matricula del alumno\n");
    scanf("%d", &alumno.matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno\n");
    gets(alumno.nombres);
    fflush(stdin);

    printf("Ingrese el genero del alumnos M o F\n");
    scanf("%c", &alumno.genero);
    fflush(stdin);

    return alumno;
}

int cargarArregloDeAlumnos(strAlumno arrAlumnos[], int dim){
    int validos = 0;
    int i = 0;
    char control = 's';
    strAlumno A;


    while(control == 's' && i < dim){
        arrAlumnos[i] = cargarAlumnos(A);
        validos++;
        i++;

        printf("¿Quieres seguir cargando alumnos? Presione s para seguir cargando\n");
        fflush(stdin);
        scanf("%c", &control);

    }

    return validos;
}

///Ejercicio 2
void mostrarAlumnos(strAlumno alumno){
    printf("/--------------------------------------------------------------/\n");
    printf("Nombre: %s\n", alumno.nombres);
    printf("Matricula: %d\n", alumno.matricula);
    printf("Genero: %c\n", alumno.genero);
    printf("/--------------------------------------------------------------/\n");
}

void mostrarArregloDeAlumnos(strAlumno alumno[], int validos){
    for(int i = 0; i < validos; i++){
        mostrarAlumnos(alumno[i]);
    }
}

///Ejericico 3
int ingresarMatricula(){
    int matricula = 0;
    printf("Ingrese la matricula que desea buscar \n");
    scanf("%d", &matricula);
}

void buscarMatricula(strAlumno alumno[], int validos){
    int i = 0;
    int encontrado = 0;

    while()
}
