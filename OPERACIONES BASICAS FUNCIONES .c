/* Programa en C que imprime los nÃºmeros O, 1, 2, ... , 9, uno en cada lÃ­nea */

#include <stdio.h>
#include<conio.h>
int sumarNumeros(int val1,int val2,int val3, int val4) {
	int resultado;
	resultado = val1+val2+val3+val4;
	return resultado;
}
int restaNumeros(int val1,int val2,int val3, int val4) {
	int resultado;
	resultado = val1-val2-val3-val4;
	return resultado;
}
int multiNumeros(int val1,int val2) {
	int resultado;
	resultado = val1*val2;
	return resultado;
}
int diviNumeros(int val1,int val2) {
	int resultado;
	resultado = val1/val2;
	return resultado;
}
main(){
	int valor,val1,val2,val3,val4;
	float resultado;
	double resulGeneral;
    
    do{
    	printf("\n");
    	printf("Ingrese un valor entre 1 y 5: \n");
	    printf("1. Suma\n");
	    printf("2. Resta\n");
	    printf("3. Multiplicacion\n");
	    printf("4. Division\n");
	    printf("5. Salir\n");
		scanf("%i",&valor);
	    switch (valor) {
	        case 1:printf("Introduce cuatro números enteros separados por un espacio para sumar: \n");
	  			   scanf("%d %d %d %d", &val1, &val2,&val3,&val4);
	  			   resultado = sumarNumeros(val1,val2,val3,val4);
	  			   printf("Resultado: %f",resultado);
	               break;
	        case 2:printf("Introduce cuatro números enteros separados por un espacio para restar: \n");
	  			   scanf("%d %d %d %d", &val1, &val2,&val3,&val4);
	  			   resultado = restaNumeros(val1,val2,val3,val4);
	  			   printf("Resultado: %f",resultado);
	               break;
	        case 3:printf("Introduce cuatro números enteros separados por un espacio para multiplicar: \n");
	  			   scanf("%d %d", &val1, &val2);
	  			   resultado = multiNumeros(val1,val2);
	  			   printf("Resultado: %f",resultado);
	               break;
	        case 4:printf("Introduce cuatro números enteros separados por un espacio para multiplicar: \n");
	  			   scanf("%d %d", &val1, &val2);
	  			   resultado = diviNumeros(val1,val2);
	  			   printf("Resultado: %f",resultado);
	               break;
	        case 5:printf("Cinco");
	               break;
	        default:
	            printf("El valor esta fuera de rango");
	    }
	    resulGeneral = resultado;
	    printf("\n");
	    printf("Total: %f",resulGeneral);
   }while (valor < 5);
}



