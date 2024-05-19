#include <stdio.h>

enum Colores {
    AZUL, AMARILLO, ROJO, VERDE, BLANCO, NEGRO
};

void printColor(enum Colores color) {
    switch (color) {
        case AZUL:
            printf("Azul\n");
            break;
        case AMARILLO:
            printf("Amarillo\n");
            break;
        case ROJO:
            printf("Rojo\n");
            break;
        case VERDE:
            printf("Verde\n");
            break;
        case BLANCO:
            printf("Blanco\n");
            break;
        case NEGRO:
            printf("Negro\n");
            break;
        default:
            printf("Color no reconocido\n");
    }
}

int main() {
    enum Colores color;
    
    /* Leer un color introducido desde el teclado */
    printf("Color (0 - Azul, 1 - Amarillo, 2 - Rojo, 3 - Verde, 4 - Blanco, 5 - Negro): ");
    scanf("%d", &color);

    /* Visualizar el color introducido */
    printf("%d\n", color);

    /* Mostrar el nombre del color */
    printColor(color);

    return 0;
}

