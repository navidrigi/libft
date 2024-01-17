/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:07:20 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:07:20 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new_str;

	i = 0;
	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len])
		len++;
	new_str = (char *) malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}

// int main()
// {
//     char s[] = "HELLO";
//     char *new_str = ft_strmapi(s, example_func);
//     printf("%s\n", new_str);
//     // The new string will contain "HIQRS"
//     // ... use the new_str and don't forget to free the allocated memory
//     free(new_str);
//     return 0;
// }
