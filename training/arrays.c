/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 06:15:05 by cnari             #+#    #+#             */
/*   Updated: 2021/08/29 06:29:40 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int	tab[10];
	int	tab2[10];
	int	*tabptr[2];

	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr[1][3] = 42;
	ft_putnbr(tab2[3]);
	ft_putchar('\n');
	return(0);
}

