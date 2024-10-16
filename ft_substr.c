/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:35:17 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/16 13:01:34 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buffer;

	if ((size_t)start > ft_strlen(s))
	{
		buffer = malloc(1);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		return (buffer);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
