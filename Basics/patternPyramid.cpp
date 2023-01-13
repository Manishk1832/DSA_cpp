#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1, space, no, i;
    while (row <= n)
    {
        // 1. Print n-row times spaces
        space = 1;
        while (space <= n - row)
        {
            cout << " ";
            space = space + 1;
        }
        // 2. Print increasing numbers , row times , starting from row
        no = row;
        i = 1;
        while (i <= row)
        {
            cout << no ;

            no = no + 1;
            i = i + 1;
        }

        // 3. Print startin numbers , row-1 times, starting from no = n-2
        no = no - 2; // decreasing number print
        i = 1;
        while (i <= row - 1)
        {
            cout << no ;
            no = no - 1;

            i = i + 1;
        }

        // 4. Print '\n'
        cout <<"\n";
        row = row + 1;
    }
}