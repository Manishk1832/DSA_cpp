#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int row = 1;
    int nst = 1;
    int nsp = 2 * n - 3;
    
    while (row <= n)
    {
        int cst1 = 0;
        while (cst1 < nst)
        {
            cout << "* ";
            cst1++;
        }

        int csp = 0;
        while (csp < nsp)
        {
            cout << "  ";
            csp++;
        }

        int cst2 = 0;
        if (row == n)
        {
            cst2 = 1;
        }
        while (cst2 < nst)
        {
            cout << "* ";
            cst2++;
        }

        row++;
        nst++;
        nsp = nsp - 2;
        cout << endl;
    }
}