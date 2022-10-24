#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50] = "ola";
	char *ret;

	ret = ft_memcpy(dest, src, 9);
	printf("%s", ret);
	return (0);
}*/
