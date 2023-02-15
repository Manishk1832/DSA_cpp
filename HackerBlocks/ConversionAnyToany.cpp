#include <iostream>
using namespace std;

int ConverstionAnyToany(int sb, int db, int n)
{
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans + digit * i;
        i = i * sb;
        n = n / 10;
    }
    i = 1;
    n = ans;
    ans = 0;
    while (n != 0)
    {
        int rem = n % db;
        ans = ans + rem * i;
        i = i * 10;
        n = n / db;
    }

    return ans;
}

int main()
{
    int sb, db, n;
    cin >> sb;
    cin >> db;
    cin >> n;
    cout << ConverstionAnyToany(sb, db, n);
}