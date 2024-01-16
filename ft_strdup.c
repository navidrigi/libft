/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:54 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:54 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1);

// int main()
// {
//     char *str = "Hello, world!";
//     char *dup = strdup(str);
//     printf("%s\n", str);
//     printf("%s\n", dup);
//     free(dup);
//     printf("................\n");
//     // now, my strdup
//     char *dup2 = strdup(str);
//     printf("%s\n", str);
//     printf("%s\n", dup2);
//     free(dup2);
//     return (0);
// }

// char	*ft_strdup(const char *s)
// {
// 	size_t	i;
// 	char	*str;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	str = (char *) malloc((ft_strlen(s) + 1) * sizeof(*s));
// 	if (!str)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		str[i] = s[i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		s1_len;
	int		i;

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	dest = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
