/*
 * calculador.h
 *
 *  Created on: 9 sep. 2020
 *      Author: Legui
 */

#ifndef CALCULADOR_H_
#define CALCULADOR_H_


/* brief realiza una suma
 * param me da el 1er numero para realizar la operacion suma
 * param me da el 2do numero para realizar la operacion suma
 * return me devuelve el resultado de la suma
 * */
	int suma(int num1, int num2);

	/* brief realiza una resta
	 * param me da el 1er numero para realizar la operacion resta
	 * param me da el 2do numero para realizar la operacion resta
	 * return me devuelve el resultado de la resta
	 * */
	int resta(int num1, int num2);
	/* brief realiza una multiplicacion
	 * param me da el 1er numero para realizar la operacion multiplicacion
	 * param me da el 2do numero para realizar la operacion multiplicacion
	 * return me devuelve el resultado de la multiplicacion
	 * */
	int multiplicacion(int num1, int num2);
	/* brief realiza un factorial sobre cada numero ingresado
	 * param me da el 1er numero para realizar el factorial
	 * param me da el 2do numero para realizar el factorial
	 * return me devuelve el factorial del 1ro y 2do
	 * */
//	int factorial(int num1, int num2);
	/* brief realiza una division
	 * param me da el 1er numero para realizar la operacion dividir
	 * param me da el 2do numero para realizar la operacion dividir
	 * return me devuelve el resultado de la division
	 * */
	float division(int num1, int num2);


#endif /* CALCULADOR_H_ */
