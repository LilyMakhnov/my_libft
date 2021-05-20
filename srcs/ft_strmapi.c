/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:41:47 by esivre            #+#    #+#             */
/*   Updated: 2021/05/20 16:43:10 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	char			*ret;
	unsigned int	i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	ret = dest;
	i = 0;
	while (*s)
		*dest++ = (*f)(i++, *s++);
	*dest = 0;
	return (ret);
}
