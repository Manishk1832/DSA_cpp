#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a << " is greater" << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << "b is greater";
    }
    else
    {
        cout << c << " is greater";
    }
}