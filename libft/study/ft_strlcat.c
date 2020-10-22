/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:19:16 by hyun              #+#    #+#             */
/*   Updated: 2020/10/22 18:09:49 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			n;

	tmp = dest;
	n = 0;
	while (n++ < len)
		*tmp++ = c;
	return (dest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	printf("\ndst_len = %zd\n\n", dst_size);

	while (src[i] != '\0' && dst_size + i + 1 < size)
	{
		dst[dst_size + i] = src[i];
		printf("dst = %s, i = %zd, dst_size+i+1 = %zd\n", dst, i, dst_size+i+1);
		i++;
	}
	dst[dst_size + i] = '\0';
	while ((src[i] != '\0'))
		i++;
	if (dst_size > size)
		return (size + i);
	return (dst_size + i);
}

int main(void) {
	int dest_len = 15;
	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
		return 0;
	ft_memset(dest, 0, dest_len);
	ft_memset(dest, 'r', 6);
	printf("original dest = %s\n", dest);
	dest[14] = 'a';
	printf("next dest = %s\n", dest);
	size_t n = ft_strlcat(dest, "lorem ipsum dolor sit amet", dest_len);
	printf("final dest = %s\n", dest);
	printf("n = %zd\n", n);
	return 0;
}
