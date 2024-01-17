/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:29 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:29 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = dest;
	while (i < n)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (dest);
}

// int main()
// {
//     char dest[] = "hey you all";
//     int c = 'a';
//     size_t n = 8;
//     memset(dest, c, n);
//     printf("%s\n", dest);
//     char str[] = "hey you all";
//     ft_memset(str, c, n);
//     printf("%s\n", str);
// }
