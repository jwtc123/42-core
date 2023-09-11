

#include "libft.h"
//	This function is similar to strncpy(), but it copies at most size-1 bytes to dest, always adds a terminating null byte, and doest not pad the destination with (further) null bytes. This function fixes some of the problems if strcpy() and strncpy(), but the caller must stilll handle the possibility of data loss if size is too small. The return value of the function is the length of src, which allows truncation to be easily detected: if the return value is greater than or equal to size, truncation occured. If loss of data matters, the caller must either check the arguments before the call, or test the function return value. strlcpy() is available on Linux via the libbsd library.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
