/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:23 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:23 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// void	*ft_memcpy(void *s1, const void *s2, size_t n);

// int main()
// {
//     char s1[100];
//     const char s2[] = "";
// 	size_t n = 8;
//     ft_memcpy(s1, s2, n);
//     printf("%s\n", s1);
//     char s3[100];
//     const char s4[] = "";
//     memcpy(s3, s4, n);
//     printf("%s\n", s3);
//     return 0;
// }

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
