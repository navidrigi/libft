/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:05:40 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:05:40 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

// int main()
// {
//     char s[] = "hello";
//     size_t n = 3;
//     bzero(s+4, n);
//     printf("%s\n", s);
//     char s2[] = "hello";
//     ft_bzero(s2+4, n);
//     printf("%s\n", s2);
// }

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
