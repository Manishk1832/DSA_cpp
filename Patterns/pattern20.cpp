#include <iostream>
using namespace std;
int main()
{
    int n = 11;
    int row = 1;
    int nst = 1;
    int nsp = n / 2;
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
            if (cst == 0 || cst == nst - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            cst++;
        }

        row++;
        if (row <= n / 2 + 1)
        {
            nst = nst + 2;
            nsp--;
        }
        else
        {
            nst = nst - 2;
            nsp++;
        }

        cout << endl;
    }
}