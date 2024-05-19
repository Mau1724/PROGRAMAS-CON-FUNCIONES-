#include <stdio.h>

void imprimirTableroAjedrez(int filaAlfil, int columnaAlfil) {
    int fila, columna;
    // Posici�n del alfil
    printf("Posici�n del alfil (fila, columna): ");
    scanf("%d %d", &filaAlfil, &columnaAlfil);
    printf("\n"); // Dejar una l�nea en blanco

    // Pintar el tablero de ajedrez
    for (fila = 1; fila <= 8; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            if ((fila + columna == filaAlfil + columnaAlfil) || (fila - columna == filaAlfil - columnaAlfil))
                printf("* ");
            else if ((fila + columna) % 2 == 0)
                printf("B ");
            else
                printf("N ");
        }
        printf("\n"); // Cambiar de fila
    }
}

int main() {
    int filaAlfil, columnaAlfil;
    imprimirTableroAjedrez(filaAlfil, columnaAlfil);
    return 0;
}

