/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:14:45 by esivre            #+#    #+#             */
/*   Updated: 2021/05/20 16:16:11 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;

	if (!s)
		return (NULL);
	tab = (unsigned char *)s;
	while (n--)
		*tab++ = (unsigned char)c;
	return (s);
}
