#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp1(const char *s1, const char *s2, size_t len)
{
	size_t i;
	unsigned char *b1;
	unsigned char *b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (i < len)
	{
		printf("b1 = %c[%d], b2 = %c[%d]\n", b1[i], b1[i], b2[i], b2[i]);
		if (b1[i] != b2[i] || (b1[i] == '\0' || b2[i] == '\0'))
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

int ft_strncmp2(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("s1 = %c[%d], s2 = %c[%d]\n", s1[i], s1[i], s2[i], s2[i]);
		if (s1[i] != s2[i] || (s1[i] == '\0' || s2[i] == '\0'))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char *str1 = "test\200";
	char *str2 = "test\0";
	printf("correct > %d\n", ft_strncmp1(str1, str2, 6));
	printf("wrong > %d\n", ft_strncmp2(str1, str2, 6));
	printf("original > %d\n", strncmp(str1, str2, 6));
	return 0;
}
