/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Capital_or_Small.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:36:41 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 14:49:01 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using	namespace std;

int	main()
{
	char	c;

	cin >> c;
	if (isupper(c))
		cout << "IS CAPITAL\n";
	else
		cout << "IS SMALL\n";
	return (0);
}
