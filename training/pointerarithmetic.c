/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerarithmetic.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 05:39:56 by cnari             #+#    #+#             */
/*   Updated: 2021/08/29 05:53:40 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr;

	a = 3;
	b = 42;
	ptr = &b;
	ft_putaddr(ptr+1);
	ft_putchar('');
	ft_putnbr(*(ptr+1));
	ft_putchar('\n');
	return(0);
}

