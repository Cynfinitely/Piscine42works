/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstexample.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 06:31:10 by cnari             #+#    #+#             */
/*   Updated: 2021/08/29 05:08:05 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_nputchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}
int	main()
{
	ft_nputchar('@', 43);
	ft_putchar('\n');
	return (0);
}
