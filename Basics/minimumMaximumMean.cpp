#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, no;
    cin >> n;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int i = 1;
    while (i <= n)
    {
        cin >> no;
        if (largest < no)
        {
            largest = no;
        }
        if (smallest > no)
        {
            smallest = no;
        }
        sum = sum + no;

        i = i + 1;
    }
    int mean = sum / n;
    cout << "Mean: " << mean << endl;
    cout << "Larget: " << largest << endl;
    cout << "Smallest: " << smallest <<endl;

    return 0;
}