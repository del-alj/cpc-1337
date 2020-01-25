#include <iostream>
#include <algorithm>
#include <string>
#include <vector> 
#include <utility> 
#include <cstring>

using namespace std;

int	main()
{
	char rest[99999];
	int	a,b,q = 0, i = -1, x, y, xo, yo, c = 0;
	cin >> a;
	while (a > q)
	{
		x = 0;
		y = 0;
		cin >> b;
		i = 0;
		vector< pair <int,int > > tab;
		while (b > i)
		{
			cin >> xo >> yo;
			tab.push_back(make_pair(xo, yo));
			i++;
		}	
		sort(tab.begin(), tab.end());
		i = 0;
		c = 0;
		memset(rest, '\0', 99999*sizeof(char));
		while (b > c)
		{
			if (x > tab[c].first || y > tab[c].second)
				break;
			while (x < tab[c].first)
			{
				rest[i++] = 'R';
				x++;
			}
			while (y < tab[c].second)
			{
				rest[i++] = 'U';
				y++;
			}
			c++;
		}

		(x == tab[b - 1].first && y == tab[b - 1].second) ? cout << "YES" << "\n" << rest << "\n": cout << "NO" << "\n";
		q++;
	}
	return (0);
}
