#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>

char ft_putstr(unsigned int i, char s)
{
	if (i % 2 == 0)
		return (s - 32);
	else
		return (s);
}

int	ft_strlen(char const *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*str;
	
	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
	char *str = "gaspar";

	printf("%s", ft_strmapi(str, &ft_putstr));
	return (0);
}*/
