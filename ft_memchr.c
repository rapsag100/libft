#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char src[50] = "gaspar";
	char *ret;

	ret = ft_memchr(src, 's', 15);
	printf("%s", ret);
	return (0);
}*/
