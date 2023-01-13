#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int count = 0;
    while (count < n)
    {
        int c = a + b;
        // cout << c << endl;
        a = b;
        b = c;
        count++;
    }
    cout << a;
}