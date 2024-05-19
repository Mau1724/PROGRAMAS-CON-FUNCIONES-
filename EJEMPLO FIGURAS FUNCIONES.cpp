#include <stdio.h>

// Funci�n para calcular el �rea de un cuadrado
double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

// Funci�n para calcular el �rea de un tri�ngulo
double calcularAreaTriangulo(double base, double altura) {
	    return 0.5 * base * altura;
	}
	
	// Funci�n para calcular el �rea de un c�rculo
	double calcularAreaCirculo(double radio) {
	    const double pi = 3.14159;
	    return pi * radio * radio;
	}
	
	int main() {
	    double ladoCuadrado = 5.0;
	    double baseTriangulo = 8.0;
	    double alturaTriangulo = 6.0;
	    double radioCirculo = 3.0;
	
	    // Calcular el �rea del cuadrado
	    double areaCuadrado = calcularAreaCuadrado(ladoCuadrado);
	    printf("�rea del cuadrado: %.2lf\n", areaCuadrado);
	
	    // Calcular el �rea del tri�ngulo
	    double areaTriangulo = calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
	    printf("�rea del tri�ngulo: %.2lf\n", areaTriangulo);
	
	    // Calcular el �rea del c�rculo
	    double areaCirculo = calcularAreaCirculo(radioCirculo);
	    printf("�rea del c�rculo: %.2lf\n", areaCirculo);
	
	    return 0;
	}

