/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:44:56 by bmakhama          #+#    #+#             */
/*   Updated: 2024/01/07 11:42:15 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dest_l;
	size_t	src_l;
	size_t	total;

	dest_l = 0;
	src_l = 0;
	if (dst)
		dest_l = ft_strlen(dst);
	if (src)
		src_l = ft_strlen(src);
	src_l = ft_strlen(src);
	total = src_l + dest_l;
	if ((!dst && dest_l == dstsize) || dest_l > dstsize)
		return (src_l + dstsize);
	i = 0;
	while ((src[i] != '\0') && ((dest_l + 1) < dstsize))
	{
		dst[dest_l] = src[i];
		i++;
		dest_l++;
	}
	dst[dest_l] = '\0';
	return (total);
}
