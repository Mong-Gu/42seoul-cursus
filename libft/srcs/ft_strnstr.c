/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:29:06 by hyun              #+#    #+#             */
/*   Updated: 2020/12/06 00:06:51 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *target, size_t n)
{
	size_t	src_len;
	size_t	target_len;
	size_t	range;
	size_t	i;

	if (!target)
		return ((char *)src);
	src_len = ft_strlen(src);
	target_len = ft_strlen(target);
	while (*src && n-- >= target_len)
	{
		if (*src == *target &&
		(ft_strncmp(src, target, target_len)) == 0)
			return (char *)(src);
		src++;
	}
	return (NULL);
}
