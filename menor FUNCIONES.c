#include <stdio.h>

float findSmallest(float a, float b, float c) {
    float menor;
    if (a < b) {
        if (a < c)
            menor = a;
        else
            menor = c;
    } else {
        if (b < c)
            menor = b;
        else
            menor = c;
    }
    return menor;
}

int main() {
    float a, b, c;
    printf("Numeros a b c : ");
    scanf("%f %f %f", &a, &b, &c);

    float smallest = findSmallest(a, b, c);

    printf("Menor = %f\n", smallest);
    return 0;
}

