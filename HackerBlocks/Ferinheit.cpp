#include <iostream>
using namespace std;
int main()
{
    int maximum_far, minimimum_far, steps;
    cin >> minimimum_far;
    cin >> maximum_far;
    cin >> steps;

    for (int i = minimimum_far; i <= maximum_far; i = i + steps)
    {
        int celcius = ((i - 32) * 5) / 9;
        cout << i << "\t" << celcius << endl;
    }
}