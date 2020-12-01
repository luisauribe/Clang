#include <stdio.h>

int main()
{
	/*declaracion de variables*/
	int fahr, celsius;
	int lower, upper, step;

	/*definicion*/
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	/*ciclo que cuenta de 0 a 300*/
	while (fahr <= upper)
	{
		/* Calcula los grados °c a partir de los grados °f */
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		/* Incremento de 20 °f */
		fahr = fahr + step;
	}
	return(0);
}
