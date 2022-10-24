#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	subs = malloc(sizeof(char) * len + 1);
	if (!subs)
		return (NULL);
	while (start < ft_strlen((char*)s) && s[start] && i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
/*
int main(void)
{
	char *str1 = "lorem ispusm dolor sit amet";
	unsigned int start = 7;
	int len = 10;

	printf("%s", ft_substr(str1, start, len));
	return (0);
}*/
