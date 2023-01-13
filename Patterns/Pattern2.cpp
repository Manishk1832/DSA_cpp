#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nst = 1;
    while (row <= n)
    {
        int cst = 0; // current star
        while (cst < nst)
        { // number of star in each row
            cout << "* ";
            cst++;
        }

        cout << endl;
        row++;
        nst++;
    }
}