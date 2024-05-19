#include <stdio.h>

void printValues(char c, int i, float f, double d) {
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("d = %lf\n", d);
}

int main() {
    char c;
    int i;
    float f;
    double d;

    // Asignar valores a las variables c, i, f y d
    c = 'a';
    i = 25;
    f = 3.1416F;
    d = 2.7172;

    // Llamar a la función para imprimir los valores
    printValues(c, i, f, d);

    return 0;
}

