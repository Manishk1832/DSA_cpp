#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int a = 0;
    int b = 1;
    while (i <= n)
    {
        int c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout<<a  << endl;
}