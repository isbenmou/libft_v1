#include "libft.h"

void 	ft_putnbr_fd(int n, int fd)
{
	long number = n;
	if(number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if(number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar(number % 10 + 48, fd);
}
