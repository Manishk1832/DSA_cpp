#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int nst = n;
    int row = 1;

    while (row <= n)
    {
        int cst = 0;

        while (cst < nst)
        {
            cout << "* ";
            cst++;
        }
        row++;
        cout << endl;
    }
}
