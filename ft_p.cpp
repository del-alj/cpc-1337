#include <iostream>
#include <stdio.h>

using namespace std;

int     main()
{
    long long   q,a,b,n,s;
    long long x;
    cin >> q;
    while (q > 0)
    {
        cin >> a >> b >> n >> s;
        if(s /n > a)
            x = a*n;
        else 
            x = s/n * n;
        if (s - x <= b)  
            cout << "yes" << "\n";
        else  
            cout << "no" << "\n";
        q--;
    }
    return (0);
}