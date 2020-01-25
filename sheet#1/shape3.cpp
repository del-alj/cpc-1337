/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape3.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:36:34 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 16:24:57 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;


int	main()
{
/*	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
*/
	int	i, c = 0,l,r;
	int x;
	cin >> i;
	l = i - 1;
	while (i > c)
	{
		r = c;
		x = l - c;
		cout << string(x, ' ');
		cout << string((2 * c) + 1, '*') << "\n";
		c++;
	}
	while (c > 0)
	{
		c--;
		x = l - c;
		cout << string(x, ' ');
		cout << string((2 * c) + 1, '*') << "\n";
	}
	return (0);
}
