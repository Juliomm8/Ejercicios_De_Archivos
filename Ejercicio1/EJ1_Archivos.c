#include <stdio.h>

int main() {
    const char *filename = "D:\\archivos\\archivo.txt";
    FILE *file;

    file = fopen(filename, "r");
    if (file != NULL) {
        printf("El archivo '%s' ya existe.\n", filename);
        fclose(file);


        file = fopen(filename, "a");
        if (file == NULL) {
            perror("Error al abrir el archivo existente");
            return 1;
        }
        fprintf(file, "Añadiendo una nueva línea al archivo existente.\n"); 
        printf("Se ha añadido contenido al archivo '%s'.\n", filename);
        fclose(file);
    } else {

        file = fopen(filename, "w"); 
        if (file == NULL) {
            perror("Error al crear el archivo");
            return 1;
        }
        fprintf(file, "\n esto es la segunda linea");
        printf("El archivo '%s' ha sido creado y contenido escrito.\n", filename);
        fclose(file);
    }

    return 0;
}
