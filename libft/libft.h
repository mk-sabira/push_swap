/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:20:19 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/29 11:10:21 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strcat(char *dest, const char *src);
int	        ft_isdigit(int c);
int	        ft_isspace(char c);
long		ft_atoll(const char *str);
size_t	    ft_strlen(const char *str);
char	    *ft_strdup(const char *s1);
char	    *ft_strchr(const char *s, int c);

#endif