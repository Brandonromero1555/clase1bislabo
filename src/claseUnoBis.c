/*
 ============================================================================
 Name        : claseUnoBis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CLIENTES 3

int main(void) {
	setbuf(stdout,NULL);
		printf("primera clase");

		int numero;
		int suma = 0;
		int i;


		for(i=0;i<CLIENTES;i++)
		{
            printf("\nIgrese el numero: \n");
		    scanf("%d",&numero);
		    suma = suma + numero;
		}


		printf("\nLa suma del numero es %d", suma);


	return EXIT_SUCCESS;

}
