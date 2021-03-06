/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:11:44 by hyun              #+#    #+#             */
/*   Updated: 2020/11/21 18:22:20 by hyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		is_negative;
	int		len;

	ft_bzero(str, 13);
	is_negative = n < 0 ? 1 : 0;
	len = 0;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (is_negative)
		str[len] = '-';
	ft_strrev(str);
	write(fd, str, ft_strlen(str));
}
