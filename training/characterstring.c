/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characterstring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 05:39:46 by cnari             #+#    #+#             */
/*   Updated: 2021/08/25 05:46:03 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);

int	main(void)
{
	char	*ptr;

	ptr = "celal";
	ft_putchar(ptr[3]);
	ft_putchar('\n');
	return(0);
}