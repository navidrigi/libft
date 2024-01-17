/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:32 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:32 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main()
// {
//     char c = 'H';
//     int fd = 1;
//     ft_putchar_fd(c, fd);
//     ft_putchar_fd('\n', fd);
//     return 0;
// }
