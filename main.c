#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char respuesta[5];

    printf("Bienvenido al instalador del programa.\n\n");
    printf("Este programa instalará el programa en su equipo.\n");
    printf("¿Desea continuar con la instalación? (S/N) ");
    fgets(respuesta, 5, stdin);

    if (strcmp(respuesta, "S\n") != 0 && strcmp(respuesta, "s\n") != 0) {
        printf("La instalación ha sido cancelada.\n");
        return 0;
    }

    printf("\nInstalando el programa...\n");
    // Aquí puedes agregar el código necesario para instalar el programa.

    printf("\nLa instalación se ha completado exitosamente.\n");
    return 0;
}
