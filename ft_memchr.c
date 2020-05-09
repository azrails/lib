/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsallei <wsallei@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:08:01 by wsallei           #+#    #+#             */
/*   Updated: 2020/04/30 15:56:26 by wsallei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr2 = (char *)arr;
	c1 = c;
	i = 0;
	if (*arr2)
	{
		while (i < n)
		{
			if (arr2[i] == c1)
			{
				arr1 = &arr2[i];
				return (arr1);
			}
			i++;
		}
	}
	return (NULL);
}
