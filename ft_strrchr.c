/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:14:03 by ysumeral          #+#    #+#             */
/*   Updated: 2024/10/15 21:03:01 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s) + 1;
	while (*(s + slen) != (char)c && slen > 0)
		slen--;
	if (*(s + slen) == (char)c)
		return ((char *)(s + slen));
	else
		return (NULL);
}
