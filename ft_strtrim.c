/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:10:44 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/16 13:48:00 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*buffer;

	start = 0;
	if (ft_strlen(s1) == 0)
	{
		buffer = malloc(1);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		return (buffer);
	}
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	buffer = (char *)malloc(end - start + 2);
	if (buffer == NULL)
		return (NULL);
	ft_strlcpy(buffer, &s1[start], end - start + 2);
	return (buffer);
}
