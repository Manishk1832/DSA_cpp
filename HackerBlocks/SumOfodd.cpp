#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int oddSum = 0;
    int evenSum = 0;
    int count = 1;
    while (n != 0)
    {
        int digit = n % 10;
        if (count % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            oddSum += digit;
        }

        n = n / 10;
        count++;
    }
    cout << oddSum << endl;
    cout << evenSum;
}