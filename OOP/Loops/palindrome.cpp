//wap to find if a number is palindrome or not.

#include <iostream>
using namespace std;

int main()
{

    int num, reverse = 0;
    cout << "Enter the Number: ";
    cin >> num;
    do
    {
        reverse = reverse + ((num % 10) * 10);
        num = num / 10;
    } while (num != 0);

    cout << reverse;

    return 0;
}