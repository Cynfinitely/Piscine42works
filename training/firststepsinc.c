/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firststepsinc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:27:36 by cnari             #+#    #+#             */
/*   Updated: 2021/08/24 20:05:01 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
		write(1,&c,1);
		return(0);
}

int ft_nputchar(char c,int n)
{
	int i;

	i=0;
	while (i<n){
		ft_putchar(c);
		i =i+1;
	}
	return(0);
}
int	main()
{
	ft_nputchar('@',41);
	ft_putchar('\n');
	return(0);
}
