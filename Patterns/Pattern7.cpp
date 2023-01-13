#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nst = n;
    while (row <= n)
    {
        int cst = 0;
        while (cst < nst)
        {
            if (cst == 0 || cst == n - 1 || row == 1 || row == n)
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