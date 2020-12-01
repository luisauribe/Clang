#include <stdio.h>

int main()
{
	int c;

	/*Guarda un caracter de entrada en la variable c*/
	c = getchar();
	while (c != EOF) /*mientras que c sea diferente de end of file*/
		{
			/*Imprime el caracter que se guardó en la variable c*/
			putchar(c);
			c = getchar();
		}
	return(0);
}
