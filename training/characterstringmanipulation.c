/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characterstringmanipulation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 08:36:15 by cnari             #+#    #+#             */
/*   Updated: 2021/09/02 08:58:47 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace2(char *src ,char *dest)
{
	dest[0] = src[0];
}

int	main(void)
{
	char str1[] = "Yello";
	char str2[] = "Hello";

	replace2(str1, str2);
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}
