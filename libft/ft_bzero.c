#include  "libft.h"

void *ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	size_t z;

	z = 0;
	while (n--){
		p[z] = '\0';
		z++;
	}
	return (s);
}
