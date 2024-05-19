#include <stdio.h>

// Función para imprimir los números del 0 al 9
void imprimirNumeros() {
    int digito;
    for (digito = 0; digito <= 9; ++digito) {
        printf("%d\n", digito);
    }
}

int main() {
    // Llamar a la función para imprimir los números
    imprimirNumeros();
    return 0;
}

