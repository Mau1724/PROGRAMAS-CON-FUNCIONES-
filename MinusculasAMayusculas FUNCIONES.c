#include <stdio.h>
#include <ctype.h>

#define EOL '\n'
#define MAX_LETRAS 80

// Funci�n para convertir un texto de min�sculas a may�sculas
void convertirAMayusculas(char texto[], int longitud) {
    printf("El texto en may�sculas es: \n");
    for (int i = 0; i < longitud; ++i) {
        putchar(toupper(texto[i]));
    }
}

int main() {
    char letras[MAX_LETRAS];
    int cont = 0, aux = 0;
    
    // Leer el texto en min�sculas
    printf("Introduce texto en min�sculas: \n");
    for (cont = 0; (letras[cont] = getchar()) != EOL; ++cont) {
        aux = cont;
    }
    
    // Convertir a may�sculas y mostrar el texto resultante
    convertirAMayusculas(letras, aux);

    return 0;
}
