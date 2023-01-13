#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int row = 1;
    int nst = 1;

    while (row <= 2 * n - 1)
    {

        int cst = 0;
        while (cst < nst)
        {
            cout << "* ";
            cst++;
        }
        row++;
        if (row <= n)
        {
            nst++;
        }
        else
        {
            nst--;
        }

        cout << endl;
    }
}