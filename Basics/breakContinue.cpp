#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int i = 1;
    while (i <= n)
    {
        if (i == 4)
        {
            i = i + 1;
            continue;
        }
        cout << i << " ";
        i = i + 1;
    }
    cout << '\n';
}