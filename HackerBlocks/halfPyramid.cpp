#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int nst = 1;

    while (row <= n)
    {

        int cst = 0;
        int num = 1;

        while (cst < nst)
        {
            cout << num << " ";
            num++;

            cst++;
        }

        row++;
        nst++;
        cout << endl;
    }
    return 0;
}