/*
	CURSO C LIBRO KERNIGHAN & RITCHIE
	programa flujo de datos de entrada y salida

	capitulo1, variables, expresiones, iteraciones y decisiones
	herramientas: getchar, putchar
*/

#include <stdio.h>
// copia la entrada a la salida
// EOF = ctrl + c

int	main(void)
{
	int	charact;

	charact = getchar();
	while (charact != EOF)
	{
		putchar(charact);
		charact = getchar();
	}
	return (0);
}
