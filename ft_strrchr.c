/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:53:34 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:53:34 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last_occurence;

	last_occurence = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurence = (char *)&s[i];
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (last_occurence);
}

// int main()
// {
//     char *str = "yo yo, guys";
//     char *final = strrchr(str, ' ');
//     if (final == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final);
//     char *final2 = ft_strrchr(str, ' ');
//     if (final2 == NULL)
//         printf("Not found\n");
//     else
//         printf("%s\n", final2);
// }
