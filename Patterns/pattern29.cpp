#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int row = 1;
    int nsp = n - 1;
    int nst = 1;
    // int ntp = 1;
    int srn = 1;
    while (row <= n)
    {
        int csp = 0;
        while (csp < nsp)
        {
            cout << "\t";
            csp++;
        }
        int cst = 0;
        int ntp = srn;
        while (cst < nst)
        {

            if (ntp == 1 || ntp == n - 1)
            {
                cout << ntp << "\t";
            }
            else
            {
                cout << cst;
            }
            if (cst < nst / 2)
            {
                ntp++;
            }
            else
            {
                ntp--;
            }
            cst++;
        }

        row++;
        nsp--;
        nst += 2;
        srn++;
        cout << endl;
    }
}   