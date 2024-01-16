/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:26 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:26 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// void	*ft_memmove(void *dest, const void *src, size_t n);

// int main()
// {
//     char src[] = "helo melo";
//     char dest[20];
//     size_t n = 6;
//     memmove(dest, src, n);
//     printf("%s\n", dest);
//     char dest2[20];
//     char *final = ft_memmove(dest2, src, n);
//     printf("%s\n", final);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
