/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:16 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:16 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;
	unsigned char	a;

	i = 0;
	string = (unsigned char *) s;
	a = (unsigned char) c;
	while (i < n)
	{
		if (*string == a)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
