/*
	CURSO C LIBRO KERNIGHAN & RITCHIE
	programa flujo de datos de entrada y salida

	capitulo1, variables, expresiones, iteraciones y decisiones
	modificacion: contar lineas, sentencia if
*/

#include <stdio.h>

int	main(void)
{
	int	c;
	int	nl;

	nl = 0;
	while((c = getchar()) != EOF)
	{
		if(c=='\n')
			++nl;
	}
	printf("%d\n", nl);
	return (0);
}
