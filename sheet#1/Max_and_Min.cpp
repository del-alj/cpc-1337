/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max_and_Min.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:07:52 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 13:19:39 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

using namespace std;

int	main()
{
	int	tab[4];
	cin >> tab[0] >> tab[1] >> tab[2] >> tab[3];
	cout << *min_element(tab, tab+4) << " " << *max_element(tab, tab+4);
	return (0);
}
