#include <stdio.h>
#include <ctype.h>

#define EOL '\n'
#define MAX_LETRAS 80

// Función para convertir un texto de minúsculas a mayúsculas
void convertirAMayusculas(char texto[], int longitud) {
    printf("El texto en mayúsculas es: \n");
    for (int i = 0; i < longitud; ++i) {
        putchar(toupper(texto[i]));
    }
}

int main() {
    char letras[MAX_LETRAS];
    int cont = 0, aux = 0;
    
    // Leer el texto en minúsculas
    printf("Introduce texto en minúsculas: \n");
    for (cont = 0; (letras[cont] = getchar()) != EOL; ++cont) {
        aux = cont;
    }
    
    // Convertir a mayúsculas y mostrar el texto resultante
    convertirAMayusculas(letras, aux);

    return 0;
}
