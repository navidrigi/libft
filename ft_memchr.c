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

// #include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

// int main()
// {
//     const char *str = "hello";
//     size_t n = 5;
//     char *final = memchr(str, 'r', n);
//     if (final == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final);
//     char *final2 = ft_memchr(str, 'r', n);
//     if (final2 == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final2);
// }

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
