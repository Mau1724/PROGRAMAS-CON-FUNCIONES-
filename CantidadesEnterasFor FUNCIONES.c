#include <stdio.h>

// Funci�n para imprimir los n�meros del 0 al 9
void imprimirNumeros() {
    int digito;
    for (digito = 0; digito <= 9; ++digito) {
        printf("%d\n", digito);
    }
}

int main() {
    // Llamar a la funci�n para imprimir los n�meros
    imprimirNumeros();
    return 0;
}

