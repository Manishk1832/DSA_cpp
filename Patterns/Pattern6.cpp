#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nsp = 0;

    int nst = n;

    while (row <= n)
    {
        int csp = 0;
        while (csp < nsp)
        {
            cout << "  ";
            csp++;
        }

        int cst = 0;
        while (cst < nst)
        {
            cout << "* ";
            cst++;
        }
        nsp = nsp + 2;
        nst--;
        row++;
        cout << endl;
    }
}