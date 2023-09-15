


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	l_needle;
	int	i;
	int	j;

	i = -1;
	j = -1;
	l_needle = ft_strlen(needle);
	if (needle[0] == '\0')
		return (char *)(haystack);
	while (haystack[++i])
	{
		while (++j < l_needle && i < n)
		{
			if (haystack[i] != needle[j])
			{
				i = i - j + 1;
				j = 0;
				break;
			}
			return (char *)(&haystack[i - j]);
		}
	}
	return (NULL);
}

int	main(void)
{
	char	hays[] = "This is only for testing";
	char	nee[] = "is only";
	int	n = 7;

	printf("mine: %s\n", ft_strnstr(hays, nee, n));
//	printf("clib: %s\n", strnstr(hays, nee, n));
}	
