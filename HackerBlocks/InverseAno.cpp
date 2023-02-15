#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pos = 1;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        int mult = pow(10, digit - 1);
        ans = ans + pos * mult;
        n = n / 10;
        pos++;
    }
    cout << ans;
}