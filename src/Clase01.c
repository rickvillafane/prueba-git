/*
 ============================================================================
 Name        : Clase01.c
 Author      : Ricardo Villafañe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int suma = 0;
	char letra = 'S';

	do{
		printf("\n Ingrese un numero \n");
		scanf("%d",&numero);
		suma = suma + numero;
		printf("\n Desea seguir ingresando numeros? S/N \n");
		fflush(stdin);
		scanf("%c",&letra);
		while(letra!='S' && letra!= 'N'){
			printf("\n Dato incorrecto; S/N \n");
			fflush(stdin);
			scanf("%c",&letra);
		}

	}while(letra=='S');



	printf("La suma es %d",suma);


	return EXIT_SUCCESS;
}
