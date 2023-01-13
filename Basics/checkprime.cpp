#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    int factor = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            factor = factor + 1;
            //       cout << i << endl;
        }
        i++;
    }
    // cout << factor << endl;
    if (factor == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}