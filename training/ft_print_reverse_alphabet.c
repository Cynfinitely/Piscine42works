/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:19:38 by cnari             #+#    #+#             */
/*   Updated: 2021/08/19 20:24:31 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  <unistd.h>

 void     ft_putchar ( char c ) 
{ 
    write ( 1 ,  & c ,  1 ) ; 
} 

int     main ( void ) 
{ 
    char     letter ; 

    letter =  'z' ; 
    while  ( letter >=  'a' ) 
    { 
        ft_putchar ( letter ) ; 
        letter --; 
    } 
}
