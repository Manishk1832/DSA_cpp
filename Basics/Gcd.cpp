#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;

    int divisor = n1;
    int dividend = n2;
    while (divisor > 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    cout << dividend;
}