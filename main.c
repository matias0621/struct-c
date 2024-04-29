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
int ingresarMatricula();
void buscarMatricula(strAlumno alumno[], int validos, int matricula);
void mostrarAlumnoPorMatricula(strAlumno alumno);
char ingresarGenero();
void buscarGenero(strAlumno alumno[], int validos, char genero);
void mostrarAlumnoPorGenero(strAlumno alumno);
int cuantosAlumnosDeUnGeneroHay(strAlumno alumn[], int validos, char genero);

int main()
{
    ///Ejercicio 1
    int dim = 50;
    strAlumno arrAlumnos[dim];

    int validos = cargarArregloDeAlumnos(arrAlumnos, dim);

    //mostrarArregloDeAlumnos(arrAlumnos, validos);
    //int dato = ingresarMatricula();
    //buscarMatricula(arrAlumnos, validos, dato);
    char genero = ingresarGenero();
    //buscarGenero(arrAlumnos, validos, genero);
    int sexo = cuantosAlumnosDeUnGeneroHay(arrAlumnos, validos, genero);

    printf("Hay %d de sexo %c", sexo, genero);
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
    return matricula;
}

void buscarMatricula(strAlumno alumno[], int validos, int matricula){
    int i = 0;
    int encontrado = 0;

    while(i < validos && encontrado == 0){
        if (alumno[i].matricula == matricula){
                mostrarAlumnoPorMatricula(alumno[i]);
                encontrado = 1;
        }
        else{
            i++;
        }
    }
}

void mostrarAlumnoPorMatricula(strAlumno alumno){
    printf("Dato del alumno %s: \n", alumno.nombres);
    printf("/--------------------------------------------------------------/\n");
    printf("Nombre: %s\n", alumno.nombres);
    printf("Matricula: %d\n", alumno.matricula);
    printf("Genero: %c\n", alumno.genero);
    printf("/--------------------------------------------------------------/\n");
}
///Ejercicio 5
char ingresarGenero(){
    char genero;
    printf("Ingrese un genero. M o F\n");
    fflush(stdin);
    scanf("%c", &genero);
    return genero;
}

void buscarGenero(strAlumno alumno[], int validos, char genero){
    int i = 0;

    while(i < validos){
        if (alumno[i].genero == genero){
                mostrarAlumnoPorGenero(alumno[i]);
                i++;
        }
        else{
            i++;
        }
    }
}

void mostrarAlumnoPorGenero(strAlumno alumno){
    printf("/--------------------------------------------------------------/\n");
    printf("Nombre: %s\n", alumno.nombres);
    printf("Matricula: %d\n", alumno.matricula);
    printf("Genero: %c\n", alumno.genero);
    printf("/--------------------------------------------------------------/\n");
}

///Ejercicio 8
int cuantosAlumnosDeUnGeneroHay(strAlumno alumn[], int validos, char genero){
    int sexo = 0;
    int i = 0;

    while(i < validos){
        if (alumn[i].genero = genero){
            sexo++;
        }
        i++;
    }
    return sexo;
}
