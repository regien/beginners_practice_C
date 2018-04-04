#include <stdio.h>
#include <unistd.h>

/*

// another lv 2 question
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

// another lv 2 question
unsigned char			swap_bits(unsigned char octet)
{
	unsigned char		left;
	unsigned char		right;
	unsigned char		holder;

	left = octet << 4;
	right = octet >> 4;
	holder = left | right;
	return (holder);
}

*/

// the 2 lv question that i have to turn in
/*
unsigned char			reverse_bits(unsigned char octet)
{
	unsigned char		hold;
	unsigned char		left;
	unsigned char		right;
	unsigned char		ple;
	unsigned char		pri;
	unsigned char		innerleft;
	unsigned char		innerright;


	left = octet << 4;
	right = octet >> 4;

// put it in the middle
	left = octet >> 2;
// cleaning border
	ple = left << 4;

//positioning
	pri = left >> 4;
	pri = pri << 4;


//	left = ple | pri;

//	hold = ple | pri;

//	ple = left << ;
//	hold = left | right;
//	hold = ~hold;


	return (hold);
}
*/

unsigned char		reverse_bits(unsigned char octet)
{
	return (((((octet >> 0) & 1) << 7) | \
			((((octet >> 1) & 1) << 6)) | \
			((((octet >> 2) & 1) << 5)) | \
			((((octet >> 3) & 1) << 4)) | \
			((((octet >> 4) & 1) << 3)) | \
			((((octet >> 5) & 1) << 2)) | \
			((((octet >> 6) & 1) << 1)) | \
			((((octet >> 7) & 1) << 0))));
}

/*
int main(void)
{
	unsigned char		h;
	unsigned char		holder;

	h = 250;
	holder = 65;
	printf("valor pendejo %d\n", (int)h);
	// 65
	print_bits(h);
	write(1, "\n", 1);
	printf("valor pendejo %d\n", (int)holder);
	print_bits(holder);
	write(1, "\n", 1);
//	holder = holder >> 4;
//	printf("valor pendejo %d\n", (int)holder);
//	print_bits(holder);
	write(1, "\n", 1);
	holder = reverse_bits(holder);
	printf("valor pendejo %d\n", (int)holder);
	print_bits(holder);
	write(1, "\n", 1);
}
*/
