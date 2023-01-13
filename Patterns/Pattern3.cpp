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
            cout << "*  ";
            cst++;
        }

        nst--;
        row++;
        cout << endl;
    }
}