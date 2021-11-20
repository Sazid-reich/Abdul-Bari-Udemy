//wap to find if a number is leap year or not.

#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter the Year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Leap Year.\n";
            else
                cout << "Not Leap Year\n";
        }
        else
            cout << "Leap Year\n";
    }
    else
        cout << "Not Leap Year\n";

    return 0;
}