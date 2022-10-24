#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else 
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
	char dst[50] = "gaspar";
	char src[50] = "ola";
	char *ret;

	ret = ft_memmove(dst, src, 3);
	printf("%s", ret);
	return (0);
}*/
