/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:11:17 by marshaky          #+#    #+#             */
/*   Updated: 2025/01/20 01:09:59 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*arr;
	unsigned char	*p;
	size_t			i;

	arr = (void *)malloc(num * size);
	if (!arr)
		return (NULL);
	p = arr;
	i = 0;
	while (i < size * num)
	{
		p[i] = 0;
		++i;
	}
	return (arr);
}
