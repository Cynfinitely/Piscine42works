/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:46:04 by cnari             #+#    #+#             */
/*   Updated: 2021/08/19 20:10:02 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <unistd.h>

 void     ft_putchar ( char c ) 
{ 
    write ( 1 ,  & c ,  1 ) ; 
} 

int     main ( void ) 
{ 
    int         i ; 
    char     c ; 

    i =  97 ; 
    while  ( i <=  122 ) 
    { 
        c = i ; 
        ft_putchar ( c ) ;
        i ++ ; 
    } 
}
