#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int no = 2;
    while (no <= n)
    {
        int i = 2;
        bool isPrime = true;
        while (i < no)
        {
            if (no % i == 0)
            {
                isPrime = false;
            }
            i = i + 1;
        }
        if (isPrime == true)
        {
            cout << i << " ";
        }
        no = no + 1;
    }

}