/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:10:44 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/11 00:59:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	counter;
	char	*buffer;

	i = 0;
	counter = 0;
	while (s1[i] != '\0')
	buffer = (char *)malloc((ft_strlen(s1) - counter) + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != s1[i] && set[j] != '\0')
			j++;
		if (s1[i] != set[j])
			buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
