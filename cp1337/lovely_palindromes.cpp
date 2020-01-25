/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lovely_palindromes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:44:00 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/12 19:14:19 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <stdio.h>

using namespace std;
int     main()
{
	int	x, c, n, i, indx;
	indx = 4;
	i = 0;
	c = 0;
	cin >> n;
	i = n >> 4;
	x = i;
	while (indx--)
	{
		c = (c << 1) | (n & 1);
		n >>= 1;
	}
	if (c == i)
		cout << "yes";
	else
		cout << "no";

	return (0);
}
