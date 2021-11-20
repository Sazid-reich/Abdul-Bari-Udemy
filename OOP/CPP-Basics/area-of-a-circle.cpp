//wap to get the area of a circle.

#include <iostream>
using namespace std;
#define pi 3.1416

int main()
{

    float r, area;
    cout << "Enter the Radious: ";
    cin >> r;
    area = pi * r * r;
    cout << area;
    return 0;
}