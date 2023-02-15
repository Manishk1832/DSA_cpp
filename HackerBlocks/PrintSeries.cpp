#include <iostream>
using namespace std;

void printSeries(int N1, int N2)
{
    int i = 1;
    int n = 1;
    while (i <= N1)
    {
        int term = 3 * n + 2;
        if (term % N2 != 0)
        {
            cout << term <<endl;
            i++;
        }
        n++;
    }
}

int main()
{
    int N1, N2;
    cin >> N1;
    cin >> N2;
    printSeries(N1, N2);
}