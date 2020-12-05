/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:59:11 by hyun              #+#    #+#             */
/*   Updated: 2020/12/05 18:43:54 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	ptrsize;
	char	*ptr;

	slen = ft_strlen(s);
	if ((size_t)start > slen)
		return (ft_strdup(""));
	if ((slen - (size_t)start) < len)
	{
		if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ptrsize = ft_strlcpy(ptr, &s[start], slen - start + 1);
	}
	else
	{
		if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ptrsize = ft_strlcpy(ptr, &s[start], len + 1);
	}
	return (ptr);
}
