#include <iostream>
using namespace std;
int main()
{

   //come again and solve


    int n = 5;
    int row = 1;
    int nst = 5;
    int srn = 1;
    while (row <= n)
    {

        int cst = 0;
        int num = srn;

        while (cst < nst)
        {
            cout << num << " ";
            cst++;
            num++;
        }

        row++;
        srn++;
        cout << endl;
    }
}