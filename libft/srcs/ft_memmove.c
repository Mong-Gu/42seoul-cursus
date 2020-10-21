/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:34:43 by hyun              #+#    #+#             */
/*   Updated: 2020/10/21 16:59:51 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == src || n == 0)
		return (dst);
	tmp_dst = dst < src ? (unsigned char *)dst : (unsigned char *)dst + n - 1;
	tmp_src = dst < src ? (unsigned char *)src : (unsigned char *)src + n - 1;
	if (dst < src)
		while (n--)
			*tmp_dst++ = *tmp_src++;
	else
		while (n--)
			*tmp_dst-- = *tmp_src--;
	return (dst);
}
