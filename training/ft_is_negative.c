/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:33:39 by cnari             #+#    #+#             */
/*   Updated: 2021/08/19 20:37:51 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <unistd.h>

 void     ft_putchar ( char c ) 
{ 
    write ( 1 ,  & c ,  1 ) ; 
} 
int     main ( int n ) 
{ 
    if  ( n <  0 ) 
         ft_putchar ( 'N' ) ; 
    else 
         ft_putchar ( 'P' ) ; 
}
