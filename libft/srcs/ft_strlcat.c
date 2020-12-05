/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:19:16 by hyun              #+#    #+#             */
/*   Updated: 2020/12/06 00:10:40 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dst_size;
	size_t	flag;

	i = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	flag = 0;
	while (src[i] != '\0' && dst_size + i + 1 < size)
	{
		dst[dst_size + i] = src[i];
		i++;
		flag = 1;
	}
	if (flag)
		dst[dst_size + i] = '\0';
	if (dst_size < size)
		return (src_size + dst_size);
	return (src_size + size);
}
