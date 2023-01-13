#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int nst = 1;
    int nsp = n / 2;
    int row = 1;
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
        row++;

        if (row <= n / 2 + 1)
        {
            nst = nst + 2;
            nsp--;
        }
        else
        {
            nsp++;
            nst = nst - 2;
        }
        cout << endl;
    }
}