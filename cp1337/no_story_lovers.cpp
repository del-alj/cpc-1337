/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_story_lovers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:13:03 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/12 17:38:57 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

using namespace std;
int     main()
{
	long long   i;
	long long x;
	x = 1;
	cin >> i;
	while (i > 30)
	{	
		x = (x << 30) % 1000000007;
		i = i - 30;
	}
	if (i > 0)
		x = (x << i) % 1000000007;
	cout << x;
	return (0);
}