/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:28:50 by cnari             #+#    #+#             */
/*   Updated: 2021/08/19 20:29:32 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <unistd.h>

 void     ft_putchar ( char c ) 
{ 
    write ( 1 ,  & c ,  1 ) ; 
} 

int     main ( void ) 
{ 
    char     number ; 

    number =  '0' ; 
    while  ( number <=  '9' ) 
    { 
        ft_putchar ( number ) ; 
        number ++ ; 
    } 
}
