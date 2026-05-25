#include <stdio.h>

int main() {
    int edad;
    float promedio;
    int reprobadas;
    int faltas;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Materias reprobadas: ");
    scanf("%d", &reprobadas);

    printf("Faltas acumuladas: ");
    scanf("%d", &faltas);

    if (reprobadas >= 4)
        printf("No puedes reinscribirte\n");
    else if (reprobadas <= 2)
        printf("Puedes reinscribirte\n");
    else if (reprobadas == 3)
        printf("Revision especial\n");

    if (promedio >= 9 && reprobadas == 0 && faltas < 5)
        printf("Eres elegible para solicitar la beca\n");
    else
        printf("No aplicas para solicitar la beca\n");

    // ASCII art
    printf("\n");
    printf("  ***************\n");
    printf("  *   BIENVENID@ *\n");
    printf("  ***************\n");
    printf("       \\(^_^)/   \n");
    printf("        (   )    \n");
    printf("        /   \\    \n");

    return 0;
}
