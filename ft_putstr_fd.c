/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:42 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:42 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// void	ft_putstr_fd(char *s, int fd);
// void	ft_putchar_fd(char c, int fd);

// int main()
// {
//     char *str = "Hello, World!";
//     int fd = 1;
//     ft_putstr_fd(str, fd);
//     ft_putchar_fd('\n', fd);
//     return 0;
// }

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
