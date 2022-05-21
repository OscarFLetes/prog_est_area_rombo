/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 04/02/2022
	Programa que pide datos para calcular el area de un rombo
	
	Progama en c que calcula el area de un rombo, con el uso del scanf y operaciones aritméticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso del scanf
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo float (medida de D, medida de d)
	El programa pide datos para calcular el area de un rombo
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//variables 
	float D, d, area;//Variables con decimal
	//Entrada 
	printf("Introduce la medida D: ");//imprime mensaje
	scanf("%f" ,&D);//lee el numero insertado por el teclado
	printf("Introduce la medida d: ");//imprime mensaje
	scanf("%f" ,&d);//lee el numero insertado por el teclado
	//Proceso
	area= D*d/2;//calcula el area
	//Salida
	printf("El area del rombo es %f" , area);//imprime la salida del area 
	
	return 0;
}
