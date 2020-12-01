#include <stdio.h>

int main()
{
	int upper;

	for (upper = 300; upper >= 0; upper = upper- 20)
		printf("%3d %6.1f\n", upper, (5.0/9.0) * (upper-32));
	return(0);
}
