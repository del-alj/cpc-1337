#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int     main()
{
    int a,b,c;

    cin >> b >> c;
    b = 180 - b;
    c = 180 - c;
    a = 180 - (b + c);
    cout << to_string(a) << "\n";
    return(0);
}