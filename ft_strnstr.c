#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	
	i = 0;
	a = 0;
	if (needle == NULL || needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + a] == needle[a] && (i + a) < len)
		{
			if (needle[a + 1] == '\0')
				return ((char *)haystack + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "als";
	char *ret;

	ret = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);

	printf("%s\n", ret);
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 17));

	return (0);
}*/
