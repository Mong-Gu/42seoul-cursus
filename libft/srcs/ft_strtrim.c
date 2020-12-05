/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:55:58 by hyun              #+#    #+#             */
/*   Updated: 2020/12/05 18:40:45 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	slen = ft_strlen(s1);
	while (slen && s1[slen - 1] && ft_strchr(set, s1[slen - 1]) != 0)
		slen--;
	if (!(result = (char *)malloc(sizeof(char) * (slen + 1))))
		return (0);
	ft_memcpy(result, s1, slen);
	result[slen] = '\0';
	return (result);
}
