/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:29:06 by hyun              #+#    #+#             */
/*   Updated: 2020/10/21 19:26:27 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *src, const char *target, size_t n)
{
	size_t src_len;
	size_t target_len;
	size_t range;
	size_t i;

	src_len = ft_strlen(src);
	target_len = ft_strlen(target);
	if (!target)
		return ((char *)src);
	if (src_len < target_len || n < target_len)
		return (0);
	range = src_len <= n ? src_len : n;
	i = 0;
	while ((int)(range - target_len + i) >= 0)
	{
		if (ft_memcmp((void *)(src + i), (void *)(target + i), target_len) == 0)
			return ((char *)src + i);
		i++;
	}
	return (0);
}
