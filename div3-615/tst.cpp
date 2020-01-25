#include <iostream>

using namespace std;

int main()
{
	int n,x,t;
	int a[400007],k = 0;
	cin >> n >> x;
	while(n--)
	{
		cin >> t;
		a[t%x]++;
		while(a[k%x] > k/x)
			k++;
		cout << k << endl;
	}
}
