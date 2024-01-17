/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:53:29 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:53:29 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	i = ft_strlen(little);
	while (*big && i <= len)
	{
		if (*big == *little && ft_strncmp(big, little, i) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// int main()
// {
//     // size_t len;
//     char *haystack = "Hello, world!";
//     char *needle = "world";

//     // len = 0;
//     // while (needle)
//     //     len++;
// 	size_t n = 13;
//     char *found = strnstr(haystack, needle, n);
//     if (found == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", found);
//     char *found2 = ft_strnstr(haystack, needle, n);
//     if (found2 == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", found2);
//     return (0);
// }
