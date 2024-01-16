/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:11 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:06:11 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char			*ft_itoa(int n);
static int		num_len(int n);

// int main()
// {
//     int num = 2;
//     char *str = ft_itoa(num);
//     printf("Number: %d\n", num);
//     printf("String: %s\n", str);
//     free(str);
//     return 0;
// }

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = num_len(n);
	nl = n;
	if (n < 0)
		nl *= -1;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (nl == 0)
		result[0] = '0';
	else
	{
		while (len--, nl != 0)
		{
			result[len] = (nl % 10) + '0';
			nl = (nl - (nl % 10)) / 10;
		}
		if (n < 0)
			result[len] = '-';
	}
	return (result);
}

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
