/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:18:10 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/16 12:19:20 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
char	*ft_strcat(char *dest, const char *src)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
// #include "stdio.h"
// int main() {
//     char dest[50] = "Hello, ";
//     const char *src = "World!";
	
//     ft_strcat(dest, src);
	
//     printf("Concatenated string: %s\n", dest);
//     const char *src2 = "thi sis test!";
//     ft_strcat(dest, src2);
//     printf("Concatenated string: %s\n", dest);
	
//     return 0;
// }