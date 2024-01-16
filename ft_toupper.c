/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:53:57 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:53:57 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

// int main()
// {
//     int c = 111;
//     printf("%d\n", toupper(c));
//     int d = 111;
//     printf("%d\n", ft_toupper(d));
// }

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
