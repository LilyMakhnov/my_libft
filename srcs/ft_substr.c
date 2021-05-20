/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:50:46 by esivre            #+#    #+#             */
/*   Updated: 2021/05/20 16:51:13 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*ret;
	char	*ret2;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ret = dest;
	while (*s && start--)
		s++;
	while (*s && len--)
		*dest++ = *s++;
	*dest = 0;
	ret2 = ft_strdup(ret);
	free(ret);
	return (ret2);
}
