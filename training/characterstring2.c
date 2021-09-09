/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characterstring2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 06:01:31 by cnari             #+#    #+#             */
/*   Updated: 2021/08/25 06:07:44 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char ptr);

int	main(void)
{
	char	*ptr;
	char	*ptr2;

	ptr2 = "lolo";
	ptr = "toto";
	ptr = ptr2;
	ft_putchar(ptr[0]);
	ft_putchar('\n');
	return(0);
}
