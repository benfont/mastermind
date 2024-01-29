/*
	CURSO C LIBRO KERNIGHAN & RITCHIE
	programa de conversion de Fahr a Celsius

	capitulo 1, variables, expresiones e iteraciones
	iteramos con el bucle for	
*/

#include <stdio.h>
//imprime la tabla F-C

int	main(void)
{
	int	fahr;

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return (0);
}
