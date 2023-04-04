/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:24:25 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/03 12:57:08 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t buff_size)
{
	size_t	i;
	size_t	s_size;

	i = 0;
	s_size = ft_strlen(src);
	if (buff_size > 0)
	{
		while ((i < s_size) && (i < buff_size - 1))
		{
			if (*(src + i))
				*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (s_size);
}
