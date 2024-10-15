/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:35:17 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/15 21:19:29 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buffer;
	size_t			i;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
	{
		buffer = malloc(1);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		return (buffer);
	}
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
