


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ps;
	unsigned char	pc;

	ps = (unsigned char *) s;
	pc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ps[i] == pc)
			return (&ps[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	unsigned char	str[] = "";
	int	cee = 99;
	size_t	ann = 3;

	printf("mine: %p\n", ft_memchr(str, cee, ann));
	printf("clib: %p\n", memchr(str, cee, ann));
	return (0);
}
