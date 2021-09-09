/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainarguements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:34:49 by cnari             #+#    #+#             */
/*   Updated: 2021/09/02 10:52:28 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	ft_putstr("Bonjour");
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("usage: ./a.out toto\n");
		return(0);
	ft_putchar('\n');
	return (0);
}
