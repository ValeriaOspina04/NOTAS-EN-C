#include <stdio.h>

#define NUM_ESTUDIANTES 3

// Estructura para representar a un estudiante
struct Estudiante {
    char nombre[50];
    float notas[3];
};

// Función para calcular el promedio de notas de un estudiante
float calcularPromedio(float notas[], int numNotas) {
    float suma = 0.0;
    for (int i = 0; i < numNotas; ++i) {
        suma += notas[i];
    }
    return suma / numNotas;
}

int main() {
    // Inicialización de estudiantes
    struct Estudiante estudiantes[NUM_ESTUDIANTES] = {
        {"Estudiante1", {85.5, 90.0, 78.5}},
        {"Estudiante2", {76.0, 88.5, 92.0}},
        {"Estudiante3", {90.0, 82.5, 91.0}}
    };

    // Simulación de usuarios (estudiantes)
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        printf("Bienvenido, %s\n", estudiantes[i].nombre);
        printf("Seleccione una opción:\n");
        printf("a. Consultar notas\n");
        printf("b. Conocer promedio de notas\n");

        char opcion;
        scanf(" %c", &opcion);

        switch (opcion) {
            case 'a':
                printf("Notas de %s:\n", estudiantes[i].nombre);
                for (int j = 0; j < 3; ++j) {
                    printf("Asignatura %d: %.2f\n", j + 1, estudiantes[i].notas[j]);
                }
                break;

            case 'b':
                printf("Promedio de notas de %s: %.2f\n", estudiantes[i].nombre,
                       calcularPromedio(estudiantes[i].notas, 3));
                break;

            default:
                printf("Opción no válida\n");
        }

        printf("\n"); // Separador entre estudiantes
    }

    return 0;
}

