#include <iostream>
using namespace std;
int main()
{
    int arr[5][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90,
                     100, 110, 120, 130, 140, 150};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int &row : arr)
    {
        for (int ele : row)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    cout << "=========" << endl;
    cout << arr;
}