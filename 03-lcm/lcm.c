#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int temp;
	unsigned int enumerator;

	temp = 0;
	enumerator = 1;
	if (a < 0)
		a = (-1 * a);
	if (b < 0)
		b = (-1 * b);
	while (enumerator <= a && enumerator <= b)
	{
		if ((a % enumerator == 0 && b % enumerator == 0))
		{
			temp = enumerator;
			enumerator++;
		}
		else
			enumerator++;
	}
	printf("valor de temp = %i \n", temp);
	printf("multiplicacion = %i\n", a * b);
	return (((a * b) / temp));
}

int main(void)
{
	printf("minimo comun multiplo = %i", lcm(-40, 35));
}
