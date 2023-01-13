#include <iostream>
using namespace std;
int main()
{
    int n = 11;
    int row = 1;
    int nst = n;

    while (row <= n)
    {
        int cst = 0;
        while (cst < nst)
        {
            if (row - cst == 1 || row + cst == n)
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
        cout << endl;
    }
}