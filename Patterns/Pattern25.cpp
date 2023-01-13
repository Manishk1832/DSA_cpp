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
            cout << "\t";
            csp++;
        }
        int cnt = 1;
        while (cnt <= nst)
        {
            cout << ntp << "\t";
            ntp++;
            cnt++;
        }

        row++;
        nsp--;
        nst += 2;

        cout << endl;
    }
}