#include <unistd.h>

void			print_bits(unsigned char octet)
{
	int			i;
	int			hold;

	hold = (int)octet;
	i = 128;
	while (i > 0)
	{
		if (hold > i || hold == i)
		{
			hold = hold - i;
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		i = i / 2;
	}
}
