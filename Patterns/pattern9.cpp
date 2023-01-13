#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nst = 1;
    int nsp = n - row;
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
        nsp--;
        nst += 2;
        row++;
        cout << endl;
    }
}