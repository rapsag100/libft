#include "libft.h"
/*#include <unistd.h>

void ft_putstr(unsigned int i, char *s)
{
	write(1, &s[0], 1);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
/*
int main(void)
{
	char *str = "hello";

	ft_striteri(str, &ft_putstr);
	return (0);
}*/
