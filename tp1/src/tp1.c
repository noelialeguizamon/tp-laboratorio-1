/*a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)*/

#include <stdio.h>
#include <stdlib.h>
#include "calculador.h"




int main() {
	setbuf(stdout,NULL);

	int operando1;
	int operando2;
	int resultadoSuma=0;
	int resultadoResta=0;
	int resultadoMultiplicacion=0;
//	int resulFact1=0;
//	int resulFact2=0;
	float resultadoDivision;

	printf("ingrese numero: ");
	fflush(stdin);
	scanf("%d",&operando1);

	printf("\ningrese numero: ");
	fflush(stdin);
	scanf("%d",&operando2);
	//A ver si funciona:
	//printf("\nEl primer numero ingresado es %d y el segundo es %d",operando1,operando2);

	//hago la suma con mi funcion:)
	resultadoSuma=suma(operando1,operando2);

	printf("\nEl resultado de %d + %d es: %d", operando1,operando2,resultadoSuma);

	//hago la resta con la funcion en mi biblioteca
	resultadoResta= resta(operando1,operando2);

	printf("\nEl resultado de %d - %d es: %d",operando1,operando2,resultadoResta);

	//hago la multiplicacion con la funcion de mi biblioteca
	resultadoMultiplicacion = multiplicacion(operando1,operando2);

	printf("\nEl resultado de %d * %d es : %d", operando1,operando2,resultadoMultiplicacion);

	//hago el factorial de cada operando...como merd lo hago!!!!!
/*	resulFact1=factorial1(operando1);
	resulFact2=factorial2(operando2);

	printf("\nEl factorial de %d es: %d \nEl factorial de %d es: %d",operando1,resulFact1(operando1),operando2,resulFact2(operando2));
*/
	//uso mi funcion de dividir
	resultadoDivision=division(operando1,operando2);
	if (operando2==0){
		printf("\nNo es posible dividir por cero");
	}else
	{
	printf("\nEl resultado de %d / %d es: %.2f",operando1,operando2,resultadoDivision);
	}
	return EXIT_SUCCESS;
}
