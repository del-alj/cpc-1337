/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:13:16 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/17 10:25:31 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_m(void	*tab, size_t size)
{
	unsigned char	tib;
	int	i;

	i = 0;
	tib = (unsigned char)tab;
	while (i < size)
	{
		printf("%c ", tib);
		tib++;
		i++;
	}
}


int	main()
{
	int	tab[10] = {0, 5 , 48, 63, 138, 255};

	ft_print_m(tab, sizeof(tab));
	return (0);
}
