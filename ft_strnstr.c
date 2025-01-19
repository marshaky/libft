/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:10:20 by marshaky          #+#    #+#             */
/*   Updated: 2025/01/19 23:37:35 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	i = 0;
	n = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (i + j < n && haystack[i + j] && needle[i + j] && \
				haystack[i + j] == needle[i + j])
		{
			k++;
		}
		if (j == n)
			return ((char *)haystack + i);
		++i;
	}
	return (0);
}
