/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   The_Best.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:08:05 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 19:10:20 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

using namespace std;

int	main()
{
	long long tab[4];
	string	list[4];

	list[0] = "Amr";
	list[1] = "Waleed";
	list[2] = "Mustafa";
	list[3] = "Youssef";
	int i = 0, j = 1;
	cin >> tab[0] >> tab[1] >> tab[2] >> tab[3];

	while (j < 4)
	{
		if (tab[i] > tab[j])
			i = j;
		j++;
	}
	j = 0;
	while (j < 4)
	{
		if (i != j && tab[i] == tab[j])
		{
			cout << "We are the best";
			return(0);
		}
		j++;
	}
	cout << list[i];
	return (0);
}
