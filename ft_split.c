#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int	p;

	i = 0;
	p = 1;
	count = 0;
	while (s[i])
	{
		if (p == 1 && s[i] != c)
		{
			count++;
			p = 0;
		}
		else if (s[i] == c)
			p = 1;
		i++;
	}
	return (count);
}

int	ft_countletter(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (s1[i] != c && s1[i])
		i++;
	return (i);
}
	
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a;
	size_t	d;
	char	**array;
	
	i = 0;
	d = 0;
	if (!(array = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))) || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			if (!(array[d] = malloc(sizeof(char) * (ft_countletter(s + i, c) + 1))))
				return (NULL);
			a = 0;
			while (s[i] != c && s[i])
				array[d][a++] = s[i++];
			array[d++][a] = '\0';
		}
	}
	array[d] = 0;
	return (array);
}
/*
int main(void)
{
	char *str = "*ola*gaspar*";
	char **splt;
	int	i;

	splt = ft_split(str, '*');
	while (splt[i])
	{
		printf("%s, ", splt[i]);
		i++;
	}
	return (0);
}*/
