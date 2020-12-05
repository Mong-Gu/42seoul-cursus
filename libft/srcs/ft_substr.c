/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:59:11 by hyun              #+#    #+#             */
/*   Updated: 2020/12/05 19:00:46 by hyun             ###   ########.fr       */
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

	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ptrsize = slen - (size_t)start) < len ? ft_strlcpy(ptr, &s[start], slen - start + 1) : ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
