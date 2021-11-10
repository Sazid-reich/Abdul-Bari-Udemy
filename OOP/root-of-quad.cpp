#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     double a, b, c, temp, ans1, ans2;
//     cin >> a >> b >> c;
//     temp = b * b - 4 * a * c;
//     if (temp < 0)
//         cout << "Imaginary Number";
//     else
//     {
//         ans1 = -b + sqrt(temp) / 2 * a;
//         ans2 = -b - sqrt(temp) / 2 * a;
//         cout << "Ans 1: " << ans1 << endl;
//         cout << "Ans 2: " << ans2 << endl;
//     }

//     return 0;
// }