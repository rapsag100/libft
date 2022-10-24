#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	subs = malloc(sizeof(char) * len + 1);
	if (!subs)
		return (NULL);
	while (s[start] && i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

int	ft_strlen(char *s1)
{
	int 	i;
	
	i = 0;
	while (s1[i])
		i++;
	return (i);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		a;
	size_t		l;
	
	a = 0;
	while (set[a])
	{
		while (set[a] == *s1 && *s1)
		{	
			s1++;
			if (set[a] != *s1)
				a = 0;
		}
		a++;
	}
	l = ft_strlen((char *)s1);
	while (set[a])
	{
		while (set[a] == s1[l - 1] && l > 0)
		{	
			l--;
			if (set[a] != s1[l - 1])
				a = 0;
		}
		a++;
	}
	return (ft_substr(s1, 0, l));
}

int main(void)
{
	char *str = "aaaggigggssss";
	char *set = "ags";
	char *res;
	res = ft_strtrim(str, set);
	printf("%s", res);
	return (0);
}
