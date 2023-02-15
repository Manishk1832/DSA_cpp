#include <iostream>
using namespace std;

long Lcm(long N1, long N2)
{
    long divisor = N1;
    long dividend = N2;
    long mult = dividend * divisor;
    while (divisor % dividend != 0)
    {
        long rem = divisor % dividend;
        divisor = dividend;
        dividend = rem;
    }
    long gcd = dividend;
    long lcm = mult / gcd;
    return lcm;
}

int main()
{
    long N1, N2;
    cin >> N1;
    cin >> N2;

    long ans = Lcm(N1, N2);
    cout << ans;
}