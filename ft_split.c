/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 02:07:33 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/14 19:47:12 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_count_words(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s == '\0')
	{
		if (*s == c && *(s + 1) != '\0' && *(s + 1) == c)
			counter++;
		s++;
	}
	return (counter);
}

static char	*ft_malloc_word()
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	counter;

	counter = ft_count_words(s, c);
	buffer = (char **)malloc((counter * sizeof(char **)) + 1);
	buffer[counter + 1] = NULL;
	while (counter > 0)
	{
		
		counter--;
	}
	return (buffer);
}
