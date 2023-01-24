#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int row = 1;
    int nst = n;
    int nsp = row-1;

    while (row <= n)
    {

        int csp = 0;
        while (csp < nsp)
        {
            cout << " ";
            csp++;
        }

        int cst = 0;
        while (cst < nst)
        {
            cout << "* ";
            cst++;
        }
        nsp++;
        nst--;
        row++;
        cout << endl;
    }
}