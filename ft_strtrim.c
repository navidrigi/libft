/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:53:41 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:53:41 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	is_in_set(char const c, char const *set);

// int main()
// {
//     char const str1[] = "   Hello, World!   ";
//     char const trimset[] = " \t\n";
//     char *new_str = ft_strtrim(str1, trimset);
//     if (new_str == NULL)
//         printf("Failed\n");
//     else
//         printf("%s\n", new_str);
//     free(new_str);
//     return (0);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s1;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[end], set))
		end--;
	trimmed_s1 = (char *)malloc(end - start + 2);
	if (!trimmed_s1)
		return (NULL);
	ft_strncpy(trimmed_s1, &s1[start], end - start + 1);
	trimmed_s1[end - start + 1] = '\0';
	return (trimmed_s1);
}

static int	is_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}
