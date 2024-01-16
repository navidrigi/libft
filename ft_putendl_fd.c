/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:36 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:36 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// void	ft_putendl_fd(char *s, int fd);
// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);

// int main()
// {
//     char *str = "Hello, World!";
//     int fd = 1;
//     ft_putendl_fd(str, fd);
//     return 0;
// }

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
