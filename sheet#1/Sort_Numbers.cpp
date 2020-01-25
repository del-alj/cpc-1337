/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort_Numbers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:13:35 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 20:33:33 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	int tab[3], tab1[3], max, min;
	int	i = -1;
	
	cin >> tab[0] >> tab[1] >> tab[2];
	tab1 = tab;
	i = -1;
	while (i++ < 3)
		cout << tab[i] << endl;
	return (0);
}
