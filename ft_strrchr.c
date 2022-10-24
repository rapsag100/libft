#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == 0)
		return ((char *)(s + i));
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
int main()
{
	char str[] = "http://wwwtutorialspointcom";
	char ch = 'm';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
