/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:19 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:19 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int main()
// {
//     char *s1 = "helli";
//     char *s2 = " ";
//     size_t n = 3;
//     printf("%d\n", memcmp(s1, s2, n));
//     printf("%d\n", ft_memcmp(s1, s2, n));
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*temp1;
	const unsigned char	*temp2;

	i = 0;
	temp1 = s1;
	temp2 = s2;
	while (i < n)
	{
		if (*temp1 != *temp2)
			return (*temp1 - *temp2);
		temp1++;
		temp2++;
		i++;
	}
	return (0);
}
