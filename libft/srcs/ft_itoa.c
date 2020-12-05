/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:21:41 by hyun              #+#    #+#             */
/*   Updated: 2020/12/05 18:42:10 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_len(unsigned int n)
{
	int	cnt;

	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static void	switch_to_str(char *res, unsigned int n, int len)
{
	char	c;

	c = n % 10 + '0';
	if (n < 10)
	{
		*(res + len) = c;
		return ;
	}
	switch_to_str(res, n / 10, len - 1);
	*(res + len) = c;
	return ;
}

char		*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n > 0)
		len = get_digit_len(n);
	else
		len = get_digit_len(-n) + 1;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (n >= 0)
		switch_to_str(res, n, len - 1);
	else
	{
		switch_to_str(res, -n, len - 1);
		*res = '-';
	}
	res[len] = '\0';
	return (res);
}
