/*
 * calculador.c
 *
 *  Created on: 9 sep. 2020
 *      Author: Legui
 */
#include <stdio.h>
#include <stdlib.h>

	int suma(int num1, int num2)
	{
		int resp=0;
		int flagSuma=0;

		if(flagSuma==0){
			resp= num1+ num2;
			flagSuma=1;
		}
		return resp;

	}

	int resta(int num1, int num2)
	{
		int respResta=0;
		int flagResta=0;

		if (flagResta==0){
			respResta=num1-num2;
			flagResta=1;
		}
		return respResta;

	}

	int multiplicacion(int num1, int num2)
	{	int respMultiplicacion=0;
		int flagMultiplicacion=0;
		if(flagMultiplicacion==0 && num2!=0){
			respMultiplicacion= num1*num2;
			flagMultiplicacion=1;
		}
		return respMultiplicacion;

	}

/*	int factorial(int num1, int num2)
	{


	}
*/
	float division(int num1, int num2)
	{	float resultadoDivision;

		resultadoDivision=(float) num1/num2;

		return resultadoDivision;
	}

