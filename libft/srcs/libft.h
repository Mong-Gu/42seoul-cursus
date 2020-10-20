/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyun <hyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:33:59 by hyun              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/20 23:51:29 by hyun             ###   ########.fr       */
=======
/*   Updated: 2020/10/20 00:35:54 by hyun             ###   ########.fr       */
>>>>>>> da9b4df5ed43a9ddc5d723903d122831b0f3e7e9
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(char *src);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
<<<<<<< HEAD
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_atoi(const char *str);
void	ft_bzero(void *b, size_t len);
void	*ft_memset(void *dest, int c, size_t len);
=======
int		ft_strncmp(char *s1, char *s2, size_t len);
int		ft_atoi(const char *str);
>>>>>>> da9b4df5ed43a9ddc5d723903d122831b0f3e7e9

#endif
