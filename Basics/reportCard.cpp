#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (80 <= marks && marks < 90)
    {
        cout << "Grade B ";
    }
    else if (70 <= marks && marks < 80)
    {
        cout << "Grade C";
    }
    else if (60 <= marks && marks < 70)
    {
        cout << "Grade D";
    }
    else if (50 <= marks && marks < 60)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}