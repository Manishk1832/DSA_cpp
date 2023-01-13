#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nsp = n - 1;
    int nst = 1;
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
        while (cnt <= nst)
        {
            cout << ntp << " ";
            cnt++;
        }
        ntp++;
        row++;
        nsp--;
        nst += 2;

        cout << endl;
    }
}