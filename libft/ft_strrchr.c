

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;
	char	*ps;
	char	pc;

	n = ft_strlen(s);
	ps = (char *) s;
	pc = (char) c;
	while (n >= 0)
	{
		if (ps[n] == pc)
			return (&ps[n]);
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "HEdLO";
	int	cee = 99;

	printf("Mine: %s\n", ft_strrchr(str, cee));
	printf("clib: %s\n", strrchr(str, cee));
	return (0);
}
