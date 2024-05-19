#include <stdio.h>

double calculateTriangleArea(double base, double height) {
    return base * height / 2.0;
}

int main() {
    double base = 11.5, altura = 3.0, area = 0.0;
    area = calculateTriangleArea(base, altura);
    printf("Area = %f\n", area);
    //printf("Area = %g\n", area);  //%g makes the significant zeros not appear
    return 0;
}
