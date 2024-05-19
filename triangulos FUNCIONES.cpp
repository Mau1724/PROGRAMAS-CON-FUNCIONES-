#include <stdio.h>
#include <math.h>

double area; 

main() {
    int opc;
    for (;;) {
        printf("1. area cuadrado\n2. area rectangulo\n3. area triangulo\n4. area circulo\n5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1: {
                float lad;
                printf("Introduce el lado del cuadrado: ");
                scanf("%f", &lad);
                area = lad * lad;
                printf("El area del cuadrado es: %.2lf\n", area);
                break;
            }
            case 2: {
                int lar, anc;
                printf("Introduce el largo y el ancho del rectangulo: ");
                scanf("%d %d", &lar, &anc);
                area = lar * anc;
                printf("El area del rectángulo es: %.2lf\n", area);
                break;
            }
            case 3: {
                double bas, alt;
                printf("Introduce la base y la altura del triangulo: ");
                scanf("%lf %lf", &bas, &alt);
                area = 0.5 * bas * alt;
                printf("El area del triangulo es: %.2lf\n", area);
                break;
            }
            case 4: {
                double rad;
                printf("Introduce el radio del circulo: ");
                scanf("%lf", &rad);
                area = M_PI * rad * rad;
                printf("El area del circulo es: %.2lf\n", area);
                break;
            }
            case 5:
                return 0;
            default:
                printf("Opcion no valida\n");
        }
    }
}
