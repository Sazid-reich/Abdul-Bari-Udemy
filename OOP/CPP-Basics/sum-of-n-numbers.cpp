#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double a, b, c, temp, ans1, ans2, imgpart, realpart;
    cin >> a >> b >> c;
    temp = b * b - 4 * a * c;
    if (temp < 0)
    {
        cout << "Imaginary Roots: ";
        realpart = -b / (2 * a);
        imgpart = sqrt(-temp) / (2 * a);
        cout << "Roots are complex: ";
        cout << "Ans 1: " << realpart << "+" << imgpart << "i" << endl;
        cout << "Ans 2: " << realpart << "-" << imgpart << "i" << endl;
    }
    else if (temp == 0)
    {
        cout << "Root are real and same: ";
        cout << -b / (2 * a);
    }
    else if (temp > 0)
    {
        ans1 = (-b + sqrt(temp)) / (2 * a);
        ans2 = (-b - sqrt(temp)) / (2 * a);
        cout << "Ans 1: " << ans1 << endl;
        cout << "Ans 2: " << ans2 << endl;
    }

    return 0;
}