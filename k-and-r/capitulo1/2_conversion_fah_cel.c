/*
	CURSO C LIBRO KERNIGHAN & RITCHIE

	conversion de grados Fahrenheit a grados Celsius

	capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20, ... 300

int	main(void)
{
	int	fahr, celsius;
	int	lower, upper, step;

	lower = -10;
	upper = 50;
	step = 10;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5*(fahr-32)/9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
