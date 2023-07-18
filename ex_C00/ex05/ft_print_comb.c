/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:08:42 by gdemerge          #+#    #+#             */
/*   Updated: 2023/07/06 11:19:56 by gdemerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	nb2 = '1';
	nb3 = '2';
	while (nb3 < '9')
	{
		write(1, &nb3, 1);
                nb3++;
		while (nb2 < '9')
		{
			write(1, &nb2, 1);
                        nb2++;
			while (nb1 < '9')
			{
				write(1, &nb1, 1);
				nb1++;
			}
		}
	}
}

int main (){
	ft_print_comb();
	return 0;
}
