/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dereferenciation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 05:17:40 by cnari             #+#    #+#             */
/*   Updated: 2021/08/25 05:22:50 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
		int	a;
		int	*ptr;

		a = 3;
		ptr = &a;
		ft_putnbr(*ptr);
		*ptr = 42;
		ft_putchar('\n');
		ft_putnbr(a);
		return(0);
}

