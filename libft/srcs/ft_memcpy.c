/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:51:58 by hyun              #+#    #+#             */
/*   Updated: 2020/12/06 00:15:14 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			n;

	if (!(dst || src))
		return (dst);
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	n = 0;
	while (n++ < len)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
