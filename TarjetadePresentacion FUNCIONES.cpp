#include <stdio.h>

// Función para imprimir la tarjeta de presentación
void imprimirTarjetaPresentacion(char nombre[], int dia, char mes[], int anio, int edad, double telefono, char correo[], int matricula) {
    printf("***Tarjeta de presentacion***\n");
    printf("NOMBRE: %s\n", nombre);
    printf("Fecha de nacimiento: %d de %s de %d\n", dia, mes, anio);
    printf("Edad: %d\n", edad);
    printf("Telefono: %.0lf\n", telefono);
    printf("Correo electronico: %s\n", correo);
    printf("Matricula: %d\n", matricula);
}

int main() {
    char nombre[] = "Mariana Teran Nestor";
    int dia = 9;
    char mes[] = "Octubre";
    int anio = 2003;
    int edad = 20;
    double telefono = 7131271208;
    char correo[] = "mariteran920@gmail.com";
    int matricula = 715263;

    // Llamar a la función para imprimir la tarjeta de presentación
    imprimirTarjetaPresentacion(nombre, dia, mes, anio, edad, telefono, correo, matricula);

    return 0;
}
