#include <stdio.h>

// Función para calcular el área de un cuadrado
double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

// Función para calcular el área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
	    return 0.5 * base * altura;
	}
	
	// Función para calcular el área de un círculo
	double calcularAreaCirculo(double radio) {
	    const double pi = 3.14159;
	    return pi * radio * radio;
	}
	
	int main() {
	    double ladoCuadrado = 5.0;
	    double baseTriangulo = 8.0;
	    double alturaTriangulo = 6.0;
	    double radioCirculo = 3.0;
	
	    // Calcular el área del cuadrado
	    double areaCuadrado = calcularAreaCuadrado(ladoCuadrado);
	    printf("Área del cuadrado: %.2lf\n", areaCuadrado);
	
	    // Calcular el área del triángulo
	    double areaTriangulo = calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
	    printf("Área del triángulo: %.2lf\n", areaTriangulo);
	
	    // Calcular el área del círculo
	    double areaCirculo = calcularAreaCirculo(radioCirculo);
	    printf("Área del círculo: %.2lf\n", areaCirculo);
	
	    return 0;
	}

