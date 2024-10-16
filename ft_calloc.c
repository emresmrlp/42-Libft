/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:25:45 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/16 17:33:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = malloc(count * size);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		buffer[i] = 0;
		i++;
	}
	return ((void *)buffer);
}
