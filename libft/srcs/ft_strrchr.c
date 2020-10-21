/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:28:41 by hyun              #+#    #+#             */
/*   Updated: 2020/10/21 18:55:52 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return ((char *)s + len);
	while (i < len)
	{
		if (s[len - i - 1] == c)
			return ((char *)s + len - i - 1);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + len - i - 1);
	return (NULL);
}
