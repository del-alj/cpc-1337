#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <cstring>
#include <cmath>

using namespace std;

int	main()
{
	int tab[3],n,t,i, indx, nb;

	cin >> t;
	while (t--)
	{
		i = 2;
		indx = -1;
		cin >> nb;
		n = nb;
		nb = sqrt(nb);
		while (nb > i)
		{
			if (n % i == 0)
			{
				indx++;
				tab[indx] = i;
				n = n / i;
			}
			if (indx == 1 && n > i)
			{
				indx++;
				tab[indx] = n;
				break;
			}
			i++;
		}
		(indx == 2) ? cout << "YES\n" << tab[0] << " " << tab[1] << " " << tab[2] << "\n" : cout << "NO\n";
	}
	return (0);
}
