#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (a <= b && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}