#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nsp = n - row;
    int nst = 1;
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
            if (cst % 2 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "! ";
            }
            cst++;
        }
        nsp--;
        nst = nst + 2;
        row++;
        cout << endl;
    }
}