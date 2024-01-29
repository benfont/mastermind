#include <stdio.h>

/*
	CURSO C LIBRO KERNIGHAN & RITCHIE
	programa de conversion de Fahr a Celsius

	capitulo 1, variables, expresiones e iteraciones
*/

//imprime la tabla F-C 

int	main(void)
{
	float	fahr, celsius;
	float	lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.)*(fahr-32);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
