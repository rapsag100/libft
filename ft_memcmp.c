//#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && *((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
/*
int main(void)
{
	char str1[50] = "mahmudul hasan";
	char str2[50] = "mahmudul hapan";
	int n = 14;
	printf("%d", ft_memcmp(str1, str2, n));
	return (0);
}*/
