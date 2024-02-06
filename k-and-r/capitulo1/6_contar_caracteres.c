/*
	CURSO C LIBRO KERNIGHAN & RITCHIE
	programa flujo de datos de entrada y salida

	capitulo1, variables, expresiones, iteraciones y decisiones
	modificacion: contar caracteres
*/

#include <stdio.h>

int	main(void)
{
	long	count;

	count = 0;
	while (getchar() != EOF)
		count=count+1;
	printf("%ld\n", count);
	return (0);
}
