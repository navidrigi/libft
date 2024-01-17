/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:51 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:51 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

// int main()
// {
// 	char str[] = "helo";
// 	int c = 'e';
//     char *final = strchr(str, c);
//     if (final == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final);
//     char *final2 = ft_strchr(str, c);
//     if (final2 == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final2);
// }
