/*a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)*/

#include <stdio.h>
#include <stdlib.h>
#include "calculador.h"




int main() {
	int operando1;
	int operando2;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoFactorial;
	float resultadoDivision;

	setbuf(stdout,NULL);

	printf("ingrese numero: ");
	fflush(stdin);
	scanf("%d",&operando1);

	printf("\ningrese numero: ");
	fflush(stdin);
	scanf("%d",&operando2);

	//prueba printf("\nel primer numero ingresado es %d y el segundo es %d",operando1,operando2);



	return EXIT_SUCCESS;
}
