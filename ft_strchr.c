#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (0);
}

/*int main()
{
	char str[] = "http://www.tutorialspoint.com";
	char ch = '\0';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
