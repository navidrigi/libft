/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narigi-e <narigi-e@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:05:46 by narigi-e          #+#    #+#             */
/*   Updated: 2023/06/06 12:05:46 by narigi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

// int main()
// {
// 	int i = 0;
// 	int *numbers = calloc(10, sizeof(int));
// 	while (i < 10)
// 	{
// 		numbers[i] = i;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 		printf("%d\n", numbers[i++]);
// 	free(numbers);
// 	printf("...............\n");
// 	// now, my calloc
// 	i = 0;
// 	int *numbers2 = ft_calloc(10, sizeof(int));
// 	while (i < 10)
// 	{
// 		numbers2[i] = i;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 		printf("%d\n", numbers2[i++]);
// 	free(numbers2);
// 	return (0);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
