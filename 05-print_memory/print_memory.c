#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

/*
 * ^^ Posibemente no utilize estas pendejadas
 */

void	ft_putnbr_hex(int octet, int rem)
{
	char const *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet >> 4, rem - 1);
	write(1, base + (octet % 16), 1);
}

void	sp_putchar(unsigned char const *ptr)
{
	unsigned char c;

	c = *ptr;
	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

/*
 * it's basically a really complex way to print in base 16
 */

void	print_memory(const void *addr, size_t size)
{
	size_t		i;
	int		a;
	unsigned char const *ptr;
	
	ptr = addr;
	i = 0;
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_putnbr_hex(*(ptr + i + a), 2);
			if (a % 2)
				ft_putchar(' ');
			a++;
		}
		while (a < 16)
		{
			ft_putstr("  ");
			if (a % 2)
				ft_putchar(' ');
			a++;
		}
		a = 0;
		while (a < 16 && a + i < size)
		{
			sp_putchar(ptr + a+ i);
			a++;
		}
		ft_putchar('\n');
		i = i + 16;
	}
}

int main(void)
{
/*	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};
	int	stuff[10] = {45, 40, 980, 150,
	              140, 7777, 4586, 3468};
*/
	int	pendejada[20] = {45, 40, 980, 150,
	              140, 7777, 4586, 3468,
				14587, 1242, 1010, 1454,
				15458, 10, 5, 14547};
	int	A;
//	unsigned int B = -31337;

	A = 4574;

//	print_memory(tab, sizeof(tab));
/*
	printf("%02X\n", 16);
	printf("Variable A is at address: %p\n", (void*)&A);
	printf("Variable A is at address: %08x\n", A);
	printf("[A] dec: %d, Hex: %x, Unsigned: %u\n", A, A, A);
	printf("[B] dec: %d, Hex: %x, Unsigned: %u\n\n\n", B, B, B);
*/
//	print_memory(tab, sizeof(tab));
//	print_memory(stuff, sizeof(stuff));
	print_memory(pendejada, sizeof(pendejada));
	return (0);
}
