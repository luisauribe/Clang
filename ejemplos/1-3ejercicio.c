#include <stdio.h>

int main()
{
	int fahr;

	/*Ciclo que cuenta de 0 a 300 con un incremento de 20*/
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

	return(0);
}
