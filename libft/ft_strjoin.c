#include "libft.h"

char *ft_strjoin(char const *s1, char  const *s2)
{
	char *s3;
	size_t i;
	size_t j;
	size_t k;
	size_t c;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = (char *)malloc(i + j + 1);
	if (s3 == NULL)
		return (NULL);

	k = 0;
	while (i--){
		s3[k] = s1[}
	c = 0;
	while (j--){
		s3[k] = s2[c];
		k++;
		c++;
	}
	s3[k] = '\0';
	return (s3);
}
