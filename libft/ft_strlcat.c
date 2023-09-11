

#include "libft.h"
#include <libbsd.h>
#include <stdio.h>

//This function appends the null-terminated string src to the string dest, copying at most size-strlen(dest)-1 from src, and adds a  terminating null  byte  to  the result, unless size is less than strlen(dest).  This function fixes the buffer overrun problem of strcat(), but the caller must still handle the possibility of data loss if size is too small.  The function returns the length of the string strlcat() tried to create; if  the  return  value is greater than or equal to size, data loss occurred.  If data loss matters, the caller must either check the arguments before the call, or test the function return value.  strlcat() is not present in glibc and is not standardized by POSIX, but is  available  on Linux via the libbsd library.

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	max;
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	max = size - dlen - 1;
	i = 0;
	while (src[i] != '\0' && i <= max - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (size >= dlen)
		dest[dlen + i] = '\0';
	else
		continue;
	return (dlen + slen);
}

int	main(void)
{
	char	des[] = "bye";
	char	sr[] = "hello";
	size_t	siz = 10;

	printf("Mine   : %zu\n", ft_strlcat(des, sr, siz));
	printf("strlcat: %zu\n", strlcat(des, sr, siz);
	return (0);
}
