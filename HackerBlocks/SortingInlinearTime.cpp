#include <iostream>
using namespace std;



//wrong answer

void Sort(int arr[], int n)
{
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count2++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            arr[i] = 0;
        }

        for (int j = count; j < count2; j++)
        {
            arr[i] = 1;
        }

        for (int k = count2; k < n; k++)
        {
            arr[k] = 2;
        }
    }
}

int main()
{
    int n = 6;
    int arr[6] = {2, 0, 2, 1, 1, 0};
    Sort(arr, n);

    for (int print : arr)
    {
        cout << print << " ";
    }
}