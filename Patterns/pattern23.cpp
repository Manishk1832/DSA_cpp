#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nsp = n - 1;
    int ntp = 1;
    while (row <= n)
    {
        int csp = 0;
        while (csp < nsp)
        {
            cout << "  ";
            csp++;
        }
        int cnt = 1;
        while (cnt <= ntp)
        {
            cout << "1 ";
            cnt++;
        }
        row++;
        nsp--;
        ntp += 2;

        cout << endl;
    }
}