#include <iostream>
using namespace std;
int main()
{
    int num = 20;
    int div = 2;

    while (num > 1)
    {
        if (num % div == 0)
        {
            num = num / div;
            cout << div << " ";
        }
        else
        {
            div++;
        }
    }
}