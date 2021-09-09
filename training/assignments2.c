/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignments2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 05:34:31 by cnari             #+#    #+#             */
/*   Updated: 2021/08/29 05:36:44 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int	a;
	int	*ptr;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;

	a = 3;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ft_putnbr(*****ptr5);
	return(0);
}

