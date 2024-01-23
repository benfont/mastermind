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

	lower = 0;
	upper = 300;
	step = 20;
	printf("el valor de lower es %d\n", lower);
	printf("el valor de upper es %d\n", upper);
	printf("el valor de step es %d\n", step);	
	return (0);
}
