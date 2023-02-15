#include <iostream>
using namespace std;

int DecimalToint(int n)
{
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int digit = n % 8;
        ans = ans + digit * i;
        n = n / 8;
        i = i * 10;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << DecimalToint(n);
}