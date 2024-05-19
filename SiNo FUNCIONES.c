#include <stdio.h>

// Funci�n para obtener la respuesta del usuario
char obtenerRespuesta() {
    char respuesta;
    printf("Desea continuar (s/n): ");
    scanf(" %c", &respuesta);
    return respuesta;
}

// Funci�n para validar la respuesta del usuario
int esRespuestaValida(char respuesta) {
    return (respuesta == 's' || respuesta == 'n');
}

int main() {
    char respuesta;
    do {
        respuesta = obtenerRespuesta();
    } while (!esRespuestaValida(respuesta));

    return 0;
}
