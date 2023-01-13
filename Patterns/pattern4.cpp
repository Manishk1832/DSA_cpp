#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    int row = 1;
    int nsp = n - 1;
    int nst = 1;
    while (row <= n)
    {

        // space " "
        int csp = 0;
        while (csp < nsp)
        {
            cout << "   ";
            csp++;
        }

        // star *
        int cst = 0;
        while (cst < nst)
        {
            cout << "*  ";
            cst++;
        }
        nst++;
        nsp--;
        row++;
        cout << endl;
    }
}