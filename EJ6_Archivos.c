#include <stdio.h>

int main(){
    const char *filename = "D:\\archivos\\archivo.txt";
    FILE *file;

struct Producto
{
    char nombre[50];
    int cantidad;
    float precio;
    int codigo;
};
 

    struct Producto grupo[3];
 
    for (int i = 1; i <= 3; i++)
    {
        file = fopen(filename, "a");

        printf("Producto N°%d", i);
        printf("\nIngrese el nombre del producto: ");
        fgets(grupo[i].nombre, 50, stdin);
        fprintf(file, "%s\t", grupo[i].nombre);

        printf("Ingrese el codigo del producto: ");
        scanf("%d", &grupo[i].codigo);
        fprintf(file, "%d\t", grupo[i].codigo);

        printf("Ingrese la cantidad: ");
        scanf("%d", &grupo[i].cantidad);
        fprintf(file, "%d\t", grupo[i].cantidad);

        printf("Ingrese el precio: ");
        scanf("%f", &grupo[i].precio);
        fprintf(file, "%.2f\t", grupo[i].precio);
        getchar();
        fprintf(file, "\n");
 
    }
    fclose(file);
     
    
    return 0;
    

}