/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Area_of_a_Circle.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:40:23 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 23:00:50 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 

using namespace std;

int	main()
{
	double r;
	double pi = 3.14159;
	cin >> r;
	cout << fixed << setprecision(9);
	cout << "Area = " << (pi * r * r);
	return (0);
}
