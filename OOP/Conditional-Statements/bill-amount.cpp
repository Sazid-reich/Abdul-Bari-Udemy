#include <iostream>
using namespace std;

int main()
{

    float pBill, discount, fBill;
    cout << "Enter bill Amount: ";
    cin >> pBill;

    if (pBill >= 500)
    {
        fBill = pBill - (pBill * .20);
    }
    else if (pBill >= 100 && pBill < 500)
    {
        fBill = pBill - (pBill * .10);
    }
    else

        fBill = pBill;

    discount = pBill - fBill;

    cout << "Discount: " << discount << "\n";

    cout << "Final Bill: " << fBill << "\n";

    return 0;
}